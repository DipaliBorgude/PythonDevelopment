from django.db import models

# Create your models here.

from django.db import models

from django.db import models

class CustomerPersonalDetails(models.Model):
    customer_id = models.AutoField(primary_key=True)
    first_name = models.CharField(max_length=50)
    last_name = models.CharField(max_length=50)
    dob = models.DateField()
    gender = models.CharField(max_length=10)
    phone = models.CharField(max_length=15)
    email = models.EmailField()
    address = models.TextField()
    created_at = models.DateTimeField(auto_now_add=True)

    class Meta:
        db_table = 'customer_personal_details'


class CustomerBankDetails(models.Model):
    bank_id = models.AutoField(primary_key=True)
    customer = models.ForeignKey(
        CustomerPersonalDetails,
        on_delete=models.CASCADE
    )
    account_number = models.CharField(max_length=20, unique=True)
    ifsc_code = models.CharField(max_length=15)
    branch_name = models.CharField(max_length=100)
    account_type = models.CharField(max_length=20)
    balance = models.DecimalField(max_digits=12, decimal_places=2)

    class Meta:
        db_table = 'customer_bank_details'


class CustomerCredentials(models.Model):
    credential_id = models.AutoField(primary_key=True)
    customer = models.ForeignKey(
        CustomerPersonalDetails,
        on_delete=models.CASCADE
    )
    username = models.CharField(max_length=50, unique=True)
    password_hash = models.CharField(max_length=255)

    class Meta:
        db_table = 'customer_credentials'
        
        
class CustomerTransactionHistory(models.Model):
    transaction_id = models.AutoField(primary_key=True)
    customer = models.ForeignKey(
        CustomerPersonalDetails,
        on_delete=models.CASCADE
    )
    date= models.DateField(auto_now_add=True)
    amount = models.DecimalField(max_digits=12, decimal_places=2)
    transaction_type = models.CharField(max_length=20)

    class Meta:
        db_table= 'customer_transaction_history'

