from decimal import Decimal
from django.shortcuts import render,redirect
from django.http import HttpResponse
from .models import CustomerPersonalDetails, CustomerBankDetails, CustomerCredentials, CustomerTransactionHistory
from django.contrib.auth.hashers import check_password
from django.contrib.auth.hashers import make_password
from django.template.loader import get_template
from xhtml2pdf import pisa
from datetime import date,timedelta
from time import timezone




# Create your views here.
def mainpage(request):
    return render(request,"mainpage.html")

def about_us(request):
    return render(request,"about_us.html")

def home(request):
    return render(request,"mainpage.html")

def login(request):
    if request.method == "POST":
        username = request.POST.get("username")
        password = request.POST.get("password")

        try:
            user = CustomerCredentials.objects.get(username=username)

            if check_password(password, user.password_hash):
                # Login success
                request.session['customer_id'] = user.customer_id
                return redirect('services')

            else:
                return render(request, "login.html", {"error": "Invalid password"})

        except CustomerCredentials.DoesNotExist:
            return render(request, "login.html", {"error": "User not found"})

    return render(request, "login.html")



def sign_up(request):
    if request.method == "POST":
        customer_id = request.POST.get("customer_id")
        username = request.POST.get("username")
        password_hash = request.POST.get("password_hash")
        confirmPassword = request.POST.get("confirmPassword")

        try:
            customer = CustomerPersonalDetails.objects.get(customer_id=customer_id)
        except:
            return render(request, "sign_up.html", {"error": "Customer not found"})

        if password_hash != confirmPassword:
            return render(request, "sign_up.html", {"error": "Passwords do not match"})

        if CustomerCredentials.objects.filter(username=username).exists():
            return render(request, "sign_up.html", {"error": "Username exists"})

        if CustomerCredentials.objects.filter(customer=customer).exists():
            return render(request, "sign_up.html", {"error": "Already registered"})

        #Create here
        new_credential = CustomerCredentials.objects.create(
            customer=customer,
            username=username,
            password_hash=make_password(password_hash)
        )
        
        # Use immediately
        return render(request, "login.html", {
            "success": f"Account created! ID: {new_credential.credential_id}"
        })

    return render(request, "sign_up.html")

def Contact_Us(request):
    if request.method == "POST":
        page = request.POST.get("page")
    return render(request, "Contact_Us.html")


def services(request):
     return render(request,"services.html")

def Dashboard(request):
    return render(request,"Dashboard.html")

def view_balance(request):
    customer_id = request.session.get('customer_id')  

    try:
        customer = CustomerPersonalDetails.objects.get(customer_id=customer_id)
        account = CustomerBankDetails.objects.get(customer=customer)  
    except:
        return render(request, "view_balance.html", {"error": "Account not found"})

    return render(request, "view_balance.html", {
        "balance": account.balance
    })

def transactions(request):
    customer_id = request.session.get('customer_id')

    try:
        customer = CustomerPersonalDetails.objects.get(customer_id=customer_id)
        account = CustomerBankDetails.objects.get(customer=customer)
    except:
        return render(request, "transactions.html", {"error": "Account not found"})

    if request.method == "POST":
        action = request.POST.get("action")
        amount = Decimal(request.POST.get("amount"))

        # CREDIT
        if action == "credit":
            account.balance += amount 
            account.save()
            message = f"₹{amount} credited successfully"

            CustomerTransactionHistory.objects.create(
                customer=customer,
                amount=amount,
                transaction_type='CREDIT'
            )

        # DEBIT
        elif action == "debit":
            if amount > account.balance:
                return render(request, "transactions.html", {"error": "Insufficient balance"})
            account.balance -= amount
            account.save()

            CustomerTransactionHistory.objects.create(
                customer=customer,
                amount=amount,
                transaction_type='DEBIT'
            )

            message = f"₹{amount} transferred successfully"

        return render(request, "transactions.html", {
            "balance": account.balance,
            "success": message
        })

    return render(request, "transactions.html", {
        "balance": account.balance
    })

def service_dashboard(request):
    customer_id = request.session.get('customer_id')
    
    try:
        customer = CustomerPersonalDetails.objects.get(customer_id=customer_id)
    except:
        return render(request, "service_dashboard.html", {"error": "Customer not found"})

    if request.method == "POST":
        service_type = request.POST.get("service_type")
        
        if service_type == "cheque_book":
            num_cheque = request.POST.get("num_cheque")
            if not num_cheque or int(num_cheque) <= 0:
                return render(request, "service_dashboard.html", {"error": "Enter valid number of cheque books"})
            message = f"Cheque Book Request for {num_cheque} cheques submitted successfully"
        
        elif service_type in ["debit_card", "credit_card"]:
            pan_no = request.POST.get("pan_no")
            if not pan_no:
                return render(request, "service_dashboard.html", {"error": "PAN number is required"})
            message = f"{service_type.replace('_',' ').title()} Request submitted successfully for PAN: {pan_no}"

        else:
            return render(request, "service_dashboard.html", {"error": "Invalid service selected"})
        
        
        
        return render(request, "service_dashboard.html", {"success": message})

    return render(request, "service_dashboard.html")


def account_details(request):
    customer_id = request.session.get('customer_id')

    if not customer_id:
        return redirect('services.html')

    try:
        customer = CustomerPersonalDetails.objects.get(customer_id=customer_id)
        personal = CustomerPersonalDetails.objects.filter(customer_id=customer_id).first()
        bank = CustomerBankDetails.objects.filter(customer_id=customer_id).first()

        context = {
            "customer": customer,
            "personal": personal,
            "bank": bank,
        }

        return render(request, "account_details.html", context)

    except CustomerPersonalDetails.DoesNotExist:
        return redirect('login')
    

def transaction_history(request):
    customer_id = request.session.get('customer_id')

    if not customer_id:
        return redirect('login')

    transactions = CustomerTransactionHistory.objects.filter(
        customer_id=customer_id,
    ).order_by('-date')

    return render(request, 'transaction_history.html', {
        'transactions': transactions
    })


def transaction_pdf(request):
    customer_id = request.session.get('customer_id')

    transactions = CustomerTransactionHistory.objects.filter(
        customer__customer_id=customer_id,
    )

    template = get_template('transaction_pdf.html')
    html = template.render({'transactions': transactions})

    response = HttpResponse(content_type='application/pdf')
    response['Content-Disposition'] = 'attachment; filename="transactions.pdf"'

    pisa.CreatePDF(html, dest=response)

    return response


def logout(request):
    request.session.flush()
    return render(request, 'logout.html')