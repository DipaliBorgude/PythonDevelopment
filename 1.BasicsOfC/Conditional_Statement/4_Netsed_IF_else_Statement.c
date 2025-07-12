// 1) Find no is positive or negative also even or odd using nested if else conditional statement.

/*
#include<stdio.h>
int main()
{
	int num = 10;
	
	if(num > 0)
	{
		printf("Number is Positive.\n");
		
		if(num % 2 == 0)
		{
			printf("Number is Even");
		}
		else
		{
			printf("Number is Odd.\n");
		}
	}
	else
	{
		printf("Number is Negative.");
	}
}*/


// 2) Check whether a person is eligibel for loan or not.
/*
#include<stdio.h>
int main()
{
	int bank_balance;
	printf("Enter your bank balance here :");
	scanf("%d",&bank_balance);
	
	int credit_score;
	printf("Enter credit score here :");
	scanf("%d",&credit_score);

	
	if(bank_balance >= 50000)
	{
		if(credit_score >=700)
		{
			printf("Your are eligible for loan.");
		}
		else
		{
			printf("Your are not eligible for loan because your credit score is low.");
		}
	}
	else
	{
		printf("Your are not eligible for loan because your bank balance is low.");
	}
} */


//  Example 3 : Write a program to check whether a three numbers are equal or not by using nested if else.
/*
#include<Stdio.h>
int main()
{
	int num1;
	printf("Enter num1 here :");
	scanf("%d",&num1);
	
	int num2;
	printf("Enter num2 here :");
	scanf("%d",&num2);
	
	int num3;
	printf("Enter num3 here : ");
	scanf("%d",&num3);
	
	if(num1 == num2)
	{
		if(num2 == num3)
		{
			printf("All three numbers are equal.");
		}
		else
		{
			printf("Two numbers are not equal.");
		}
	}
	else
	{
		printf("All three numbers are not equal.");
	}
}*/



// Example 4 : Write a program to find maximum number out of three numbersby using nested if else.
/*
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a here :");
	scanf("%d",&a);
	
	int b;
	printf("Enter b here :");
	scanf("%d",&b);
	
	int c;
	printf("Enter c here :");
	scanf("%d",&c);
	
	if(a > b )
	{
		if(a > c )
		{
			printf("a is greter.");
		}
		else 
		{
			printf("c is greater.");
		}
	}
	else
	{
		if(b > c)
		{
			printf("b is greater.");
		}
		else
		{
			printf("c is greater.");
		}
	}
}*/

// Example 5 : Write a C program to check whether a number is even or odd.If number is even,check its divisible by 6 or not and if number is odd check if its divisible by 3 or not.
/*
#include<Stdio.h>
int main()
{
	int number;
	printf("Enter number here :");
	scanf("%d",&number);
	
	if(number%2 != 0)
	{
		if(number/3 == 0)
		{
			printf("Number is odd and also divisible by 3.");
		}
		else
		{
			printf("Number is odd but not divisible by 3.");
		}
	}
	else
	{
		if(number/6 == 0 )
		{
			printf("Number is even and divisible by 6.");
		}
		else
		{
			printf("Number is even but not divisible by 6.");
		}
	}
	
}*/


//  Example 6 : Write a program to check that given triangle is valid triangle or not,also isolated triangle or equilateral triangle based on its sides.
/*
#include<Stdio.h>
int main()
{
	int side1;
	printf("Enter side1 here :");
	scanf("%d",&side1);
	
	int side2;
	printf("Enter side2 here :");
	scanf("%d",&side2);
	
	int side3;
	printf("Enter side3 here :");
	scanf("%d",&side3);
	
	if(side1+side2 > side3 || side2+side3 > side1 || side3+side1 > side2)
	{
		if(side1==side2 && side2==side3 && side1==side3)
		{
			printf("Its a equilateral triangle.");
		}
		else if(side1==side2 || side2==side3 || side1==side3)
		{
			printf("Its a isolted triangle.");
		}
		else
		{
			printf("Its a valid triangle.");
		}
	}
	else
	{
			printf("Its not a valid triangle");
	}
	
}*/


                                           ///   Homework = 19 Jun 2025   ///
                                    
                                    
 //  Example 7 :Write a c program to calculate students grade,on the basis of score of percentage.Grade range if range 90-100 == A,80 -89  == B, 70- 79 == C,60 - 69 == D,below 60= F.
//              additionaly if student score is above 95 & he's attendance is above 90%,then he is applicable for 10K scholorship.

/*
#include<stdio.h>
int main()
{
	int grade;
	printf("Enter student grade here :");
	scanf("%d",&grade);
	
	int attendance;
	printf("Enter attendance here :");
	scanf("%d",&attendance);
	
	if(grade>=90 && grade<=100)
	{
		if(grade>95 && attendance>90)
		{
			printf("Student passed with A grade also eligible for 10k scholorship. ");
		}
		else
		{
			printf("Student passed with A grade but not eligible for 10k scholorship.");
		}
	}
	else
	{
		if(grade>=80 && grade<=89)
		{
			printf("Student passed with B grade.");
		}
		else if(grade>=70 && grade<=79)
		{
			printf("Student passed with C grade.");
		}
		else if(grade>=60 && grade<=69 )
		{
			printf("Student passed with D grade.");
		}
		else
		{
			printf("Student is fail.");
		}
	}
} */
                                   

//  Example 8 : Write a C program to determine ticket price for movie based on the age of the customer and the time of the show on the based on the below condition :
//              1) Below 18 = ticket price is 5$.
//              2) 18 & above older with show time before 5am = ticket price is 10$.
//              3) 18 & above 18 with show time is after 5am  = ticket price is 15$.
//              4) if customer is student,they get 10% off on the ticket price.


#include<stdio.h>
int main()
{
	int age;
	printf("Enter customer age here :");
	scanf("%d",&age);
	
	int student;
	printf("Enter here customer is student or not :");   // If customer is student = 1 & if customer is not a student = 0.
	scanf("%d",&student);
	
	int show_time;
	printf("Enter show time here :");
	scanf("%d",&show_time);
	
	int price;
	printf("Enter price here :");
	scanf("%d",&price);
	
	float final_price;
	
	if(age<18)
	{
		printf("Ticket price is 5$.\n");
		if(student==1)
		{
			final_price = (price-(price*0.10));
		}
	}
	else
	{
		if(show_time<5)
		{
			printf("Ticket price is 10$.\n");
			if(student==1)
			{
		    	final_price = (price-(price*0.10));
			}
		}
		else
		{
			printf("Ticket price is 15$.\n");
			if(student==1)
			{
				final_price=(price-(price*0.10));
			}
		}
	}
	
	printf("The final ticket price if customer is a student :%.f\n",final_price);
	
}

