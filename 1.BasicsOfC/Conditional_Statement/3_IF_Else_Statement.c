// 1) Check whether the number is positive,negative or zero.

/*
#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number here :");
	scanf("%d",&x);
	
	if(x>0)
	{
		printf("Entered number is positive.");
	}
	else if(x<0)
	{
		printf("Entered number is negative.");
	}
	else
	{
		printf("Entered number is zero.");
	}
	return 0;
}
*/


// 2) Check whether a number is even or odd.
/*
#include<stdio.h>
int main()
{
	int x;
	printf("Entered a numbere here :");
	scanf("%d",&x);
	
	if(x%2 == 0)
	{
		printf("Enter number ")
	}
}*/



// 3)Check whether given character is uppercase,lowercase or special symbol.
/*
#include<stdio.h>
int main()
{
	char ch;
	printf("Entered a character here :");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		
		printf("Enter character is uppercase.");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("Enter character is lowercase.");
	}
	else
	{
		printf("Enter character is special symbol.");
	}
    return 0;
}*/



//  4) Find the maximum of two numbers using if else.

/*
#include<stdio.h>
int main()
{
	int x=45;
	int y=56;
	
	if(x>y)
	{
		printf("X is greater than Y.");
	}
	else
	{
		printf("Y is greater than X.");
	}
	return 0;
}*/


// 5) Check is given year is leap year or not.

/*
#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year here : ");
	scanf("%d",&year);
	
	if(year%4 == 0)
	{
		printf("Enter year is leap year.");
	}
	else
	{
		printf("Enter year is not leap year.");
	}
	return 0;
}*/


// 6) Check whether a character is vowel or consonent.

/*
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character here : ");
	scanf("%c",&ch);
	
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u')
	{
		printf("Enter character is vowel.");
	}
	else
	{
		printf("Enter character is consonent.");
	}
}*/


// 7) Find the largest the number of three number.

/*
#include<stdio.h>
int main()
{
	int a=10;
	int b=50;
	int c=100;
	
	if(a>b && a>c)
	{
		printf("A is greatest.");
	}
	else if(b>a && b>c)
	{
		printf("B is greatest.");
	}
	else 
	{
		printf("C is greatest.");
	}
}*/


// 8) Check whether a triangle is valid based on its angles.

/*
#include<stdio.h>
int main()
{
	int angle1,angle2,angle3;
	printf("Enter the three angles of the triangle : ");
	scanf("%d %d %d",&angle1 , &angle2 , &angle3);
	
	if((angle1 + angle2 + angle3)==180 && angle1>0 && angle2>0 && angle3>0)
	{
		printf("Triangle is valid.");
	}
	else
	{
		printf("Triangle is not valid.");
	}
}*/


// 9) Implement a simple grading system based on percentafe marks.

/*
#include<Stdio.h>
int main()
{
	int marks;
	printf("Enter marks here : ");
	scanf("%d",&marks);
	
	if(marks>=35 && marks<=50)
	{
		printf("You got 'C+' grade.");
	}
	else if(marks>=51 && marks<=75)
	{
		printf("You got 'B+' grade.");
	}
	else
	{
		printf("You got 'A+' grade.");
	}
	return 0;
}*/


// 10) Check number is divisible by 5 and 11 or not.

/*
#include<stdio.h>
int main()
{
	int x;
	printf("Enter no here : ");
	scanf("%d",&x);
	
	if(x%5 == 0 && x%11 == 0)
	{
		printf("Entered number is divisible by both 5 & 11.");
    }
	else
	{
		printf("Entered number is not divisible by both 5 and 11.");
	}
	return 0;
}
*/


