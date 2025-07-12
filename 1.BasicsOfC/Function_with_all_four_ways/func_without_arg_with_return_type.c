//  1) Create a function for addition of three number.
/*
#include<stdio.h>
int sum();

int main()
{
	int add=sum();
	printf("%d",add);
}
int sum()
{
	int a;
	printf("Enter first number here : ");
	scanf("%d",&a);
	
	int b;
	printf("Enter second number here : ");
	scanf("%d",&b);

	int c;
	printf("Enter third number here : ");
	scanf("%d",&c);

    int add=a+b+c;
	
	return add;
} */


//  2) Create a function for sum of n numbers.
/*
#include<Stdio.h>
int sum();

int main()
{
	sum();
	int add=sum();
	printf("Addition of n number = %d",add);
}
int sum()
{
	int num;
	printf("Enter number here : ");
	scanf("%d",&num);
	
	int i;
	int sum=0;
	
	for(i=1; i<=num; i++)
	{
		sum=sum+i;
	}
	return sum;
} */



//  3) Create a function for addition,substraction,multiplication and division with return type.
/*
#include<Stdio.h>
int add();
int sub();
int mul();
int div();

int main()
{
	add();
	int result_add=add();
	printf("Addition = %d\n",result_add);
	
	sub();
	int result_sub=sub();
	printf("Substractio = %d\n",result_sub);
	
	mul();
	int result_mul=mul();
	printf("Multiplication = %d\n",result_mul);
	
	div();
	int result_div=div();
	printf("Division = %d\n",result_div);
}
int add()
{
	int a;
	printf("Enter first number here : ");
	scanf("%d",&a);
	
	int b;
	printf("Enter second number here : ");
	scanf("%d",&b);
	
	int result=a+b;

    return result;
}

int sub()
{
	int a;
	printf("Enter first number here : ");
	scanf("%d",&a);
	
	int b;
	printf("Enter second number here : ");
	scanf("%d",&b);
	
	int result=a-b;

    return result;
}

int mul()
{
	int a;
	printf("Enter first number here : ");
	scanf("%d",&a);
	
	int b;
	printf("Enter second number here : ");
	scanf("%d",&b);
	
	int result=a*b;

    return result;
}

int div()
{
	int a;
	printf("Enter first number here : ");
	scanf("%d",&a);
	
	int b;
	printf("Enter second number here : ");
	scanf("%d",&b);
	
	int result=a/b;

    return result;
} */



//  4) Write a program to create a function to find given no is even or odd with return type.
#include<stdio.h>
int evenOdd();

int main()
{
	int i;
    printf("Enter a number :");
    scanf("%d",&i);


	int Number=evenOdd(i);
	if(Number==1)
	{
		printf("Even : %d",i);
	}
	else
	{
		printf("Odd : %d",i);
	}
}
int evenOdd(i)
{   
    if(i%2 == 0)
    {
    	return 1;
	}
	else
	{
		return 0;
	}
	
}



//  5) Write a program to create a function to find area of 
//       a)Circle  b)Triangle  c) Rectangle  d)Paralelogram


//  6) Write a function for calculating factorial of any number.


//  7) Write a function for performing all bitwise operator.


//  8) Write a function to calculate % of student,also find out student is pass or fail.


//  9) Write a c program to create a function to swapping numbers.


//  10) Write a c program to create a function for finding given number is prime number  or not.


//  11) Write a function to create a fibonacci series.

