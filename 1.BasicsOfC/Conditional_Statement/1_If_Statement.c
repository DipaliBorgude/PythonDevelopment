// 1) Check the no is even using if conditional statement.//

/*
#include<stdio.h>
int main()
{
	int num = 0;
	
	printf("Enter number here : ");
	scanf("%d" , &num);
	
	if(num%2 == 0)
	{
		printf("number is Even.");
	}
	printf("number is Odd.");
}
*/




// 2) Find the greater no from three no using if conditional statement. //

/*
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 45;
	int c = 500;
	
	if(a>b && a>c)
	{
		printf("Greatest no amongst all three is a.");
	}
	if(b>a && b>c)
	{
		printf("Greatest no amongst all three is b.");
	}
	if(c>a && c>b)
	{
		printf("Greatest np amongst all three is c.");
	}
}
*/




// 3) Find a given year is a leap year or not.

/*
#include<stdio.h>
int main()
{
	int year ;
	
	printf("Enter a year here : ");
	scanf("%d" , &year);
	
	if(year % 4 == 0)
	{
		printf("Given year is leap year.");
	}
	printf("Given year is not leap year.");
}
*/



// 4) Check whether a given number is positive or negative.

/*
#include<stdio.h>
int main()
{
	int number;
	
	printf("Enter number here : ");
	scanf("%d" , &number);
	
	if(number < 0)
	{
		printf("Its a negative number.");
    }
	if(number > 0)
	{
		printf("Its a positive number.");
	}
}
*/




// 5) Check students is lie in which marks grade.

/*
#include<stdio.h>
int main()
{
	int marks;
	
	printf("Enter students marks here : ");
	scanf("%d" , &marks);
	
	if( marks <= 100  && marks >= 85)
	{
		printf("'Congratulations'',You scored A+ grade.");
	}
	if( marks <= 84 && marks >= 50)
	{
		printf("'Congratulations',You scored B+ grade.");
	}
	if( marks <= 49 && marks >=35 )
	{
		printf("'Congratulation',You scored C+ grade.");
	}
}
*/



// 6) Check whether a number is divisible by 5 and 11.

/*
#include<stdio.h>
int main()
{
	int num ;
	
	printf("Enter a num : ");
	scanf("%d" , &num);
	
	if(num%5 == 0  &&  num%11 == 0)
	{
		printf("Num is divisible by both 5 and 11.");
	}
	
	printf("Number is not divisible by 5 and 11.");
	return 0;
} */




// 7) Check whether a given number is three digit or not.

/*
#include<stdio.h>
int main()
{
	int num = 123;
	
	if(num>100 && num<999)
	{
		printf("The given number is three digit.");
	}
	printf("The given number is not three digit.");
	return 0;
}
*/




// 8) Check the given character is Uppercase or not.

/*
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a ch : ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("The given character is uppercase : %c",ch);
	}
	return 0;
}
*/




// 9) Check if given character is vowel or not.

/*
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("The given character is vowel.");
	}
	printf("The given character is consonent.");
	return 0;
}
*/




// 10) voting eligibility.

/*
#include<stdio.h>
int main()
{
	int age;
	printf("Enter a age here:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Your eligible for voting.");
	}
	return 0;
}
*/
