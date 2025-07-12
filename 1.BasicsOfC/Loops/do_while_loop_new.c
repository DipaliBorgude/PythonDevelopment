// 1) print i.
/*
#include<stdio.h>
int main()
{
	int i=11;
	
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=10);
}*/

// 2) Print 1 to 10.
/*
#include<stdio.h>
int main()
{
	int i=1;
	
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=10);
}*/


//  3) Print the 2 table.
/*
#include<stdio.h>
int main()
{
	int i=1;
	int j=2;
	int table;
	
	do
	{
		table=j*i;
		printf("%d*%d=%d\n",j,i,table);
		i++;
	}
	while(i<=10);
}*/

     
//  4) Write a program to check addition of 1 to 10.
/*
#include<stdio.h>
int main()
{
	int i=1;
	int sum=0;
	
	do
	{
		sum=sum+i;
		i++;
	}
	while(i<=10);
	
	printf("Sum of number from 1 to 10 : %d",sum);
}*/


//  5) How many times while loop executed.
/*
#include<stdio.h>
int main()
{
	int i=0;
	int count=0;
	
	do
	{
		printf("%d\n",i);
		i++;
		count++;
	}
	while(i<=10);
	printf("How many times executed : %d\n",count);
}*/


// 6) Print the num in ascending order.
/*
#include<stdio.h>
int main()
{
	int i=1;
	
	do
	{
		printf("%d\n",i);
        i++;
	}
	while(i<=10);
	
}*/


// 7) Print the num in descending order.
/*
#include<stdio.h>
int main()
{
	int i=10;
	
	do
	{
		printf("%d\n",i);
		i--;
	}
	while(i>=1);
}*/


//  8) Print the square of of 1 to 10.
/*
#include<stdio.h>
int main()
{
	int i=1;
	
	do
	{
		printf("%d\n",i*i);
		i++;
	}
	while(i<=10);
}*/


//  9) Print the cube of 1 to 10.
/*
#include<stdio.h>
int main()
{
	int i=1;
	
	do
	{
		printf("%d\n",i*i*i);
		i++;
	}
	while(i<=10);
}*/



//  10) Print the table.
/*
#include<Stdio.h>
int main()
{
	int i=1;
	int j;
	printf("Enter : ");
	scanf("%d",&j);
	
	do
	{
		printf("%d\n",i*j);
		i++;
	}
	while(i<=10);
}*/


//  11) Print even no.
/*
#include<Stdio.h>
int main()
{
	int i=1;
	
	do
	{
		if(i%2 == 0)
		{
			printf("%d\n",i);
	    }
	    i++;
	}
	while(i<=10);
}*/


//   12) Print odd no.
/*
#include<stdio.h>
int main()
{
	int i=1;
	
	do
	{
		if(i%2 != 0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	while(i<=10);
}*/


// 13) Print even no and their sum.
/*
#include<stdio.h>
int main()
{
	int i=1;
	int sum=0;
	
	do
	{
		if(i%2 == 0)
		{
		    printf("%d\n",i);
			sum=sum+i;
		}
		i++;

	}
	while(i<=10);
	printf("sum of even : %d\n ",sum);
}*/


// 14) Print odd no and its sum.
/*
#include<stdio.h>
int main()
{
	int i=1;
	int sum;
	
	do
	{
		if(i%2 != 0)
		{
			printf("Odd no are : %d\n",i);
			sum=sum+i;
		}
		i++;
	}
	while(i<=10);
	printf("Sum of odd no : %d\n",sum);
}*/


// 15) Print 1 to 10 and their sum.
/*
#include<stdio.h>
int main()
{
	int i=1;
	int sum;
	
	do
	{
		printf("print i : %d\n",i);
		sum=sum+i;
		i++;
	}
	while(i<=10);
	printf("Sum of 1 to 10 : %d\n",sum);
}*/




//  16) Reverse the number.
/*
#include<stdio.h>
int main()
{
	int i=456;
	int rem;
	int rev=0;
	
	do
	{
		rem=i%10;
		rev=rev*10+rem;
		
		i=i/10;
	}
	while(i!=0);
	printf("Given number in reverse order : %d",rev);
}*/




//   17) Palindrom number.
/*
#include<stdio.h>
int main()
{

	int i=565;
	int rem;
	int rev=0;
	int temp;
	
	temp=i;
	
	do
	{
		rem=i%10;
		rev=rev*10+rem;
		
		i=i/10;
	}
	while(i!=0);
		
	if(rev==temp)
		{
			printf("Given number is palindrom : %d",rev);
     	}
    else
        {
       	   	printf("Given number is not palindrom.");
        }
}*/


//  18)  Print the factorial.
/*
#include<stdio.h>
int main()
{
	int i=1;
	int n=6;
	int fact=1;
	
	do
	{
		fact=fact*i;
		i++;
	}
	while(i<=n);
	printf("Factorial of 6 : %d",fact);
}*/


//  19)  Armstrong number.
/*
#include<stdio.h>
int main()
{
	int i=153;
	int sum;
	int rem;
	int temp;
	
	temp=i;
	
	do
	{
		rem=i%10;
		sum=sum+(rem*rem*rem);
		
		i=i/10;
	}
	while(i!=0);
	if(sum=temp)
	{
		printf("Given number is Armstrong number : %d",sum);
	}
	else
	{
		printf("Given number is not Armstrong number.");
	}
}*/




// 20)  Fibonacci series.
/*
#include<Stdio.h>
int main()
{
	int x=0;
	int y=1;
	int z=0;
	
	int num=8;
	
	do
	{
		printf("%d\n",z);
		
		x=y;
		y=z;
		z=x+y;
	}
	while(z<=num);
}*/




//  21) Find the sum of digit of given no.
/*
#include<stdio.h>
int main()
{
	int i=567;
	int sum=0;
	int rem;
	
	do
	{
		rem=i%10;
		sum=sum+rem;
		
		i=i/10;
	}
	while(i!=0);
	printf("Sum of digit of given no : %d",sum);
}
*/



                                                     

