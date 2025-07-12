// 1) Check no is positive as well as even using an nested if conditional statement.

/*
#include<stdio.h>
int main()
{
	int num = 6;
	
	if(num > 0)
	{
		printf("Number is positive.");
		
		if(num %2 == 0)
		{
			printf("Number is Even");
		}
	}
	
}
*/

// 2) Check no is negative also odd number using an nested if conditional statement.

/*
#include<stdio.h>
int main()
{
	int num = -10;
	
	if(num < 0)
	{
		printf("Number is Negative.");
		
		if(num % 2 != 0)
		{
			printf("Number is Odd.");
		}
	}
}
*/


// 3)Check the marks of students,also grade them and check as well as they are eligible for special course.

/*
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks here : ");
	scanf("%d",&marks);
	
	if(marks>75)
	{
		printf("'Congratulation',You scored A+ grade.");
		
		if(marks>80)
		{
			printf("\nAlso you are eligible for special course.");
		}
	}
	return 0;
}*/


// 4) People of certain age groups,who are eligible for getting a suitable job as well as for voting.

/*
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age here : ");
	scanf("%d",&age);
	
	if(age>14)
	{
		printf("Your are not child labour,");
		
		if(age>=18)
		{
			printf("Your eligible for voting.");
		}
	}
    return 0;
}*/

// 5) Check whether number is greater 0 as well as divisible by 5 and 11 both.

/*
#include<stdio.h>
int main()
{
	int num;
	printf("Enter num here : ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("Num is greater than 0");
		
		if(num % 5 && num % 11)
		{
			printf("Num is divisible by both 5 and 11.");
		}
	}
	return 0;
}
*/


//  6) Check whether given character is Uppercase alphabet also vowel.
/*
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character here :");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("Entered charcater is Uppercase Alphabetical.");
		
		if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		{
			printf("Entered character is also vowel.\n");
		}
	}
}*/


// 7) Check whether given character is lowercase alphabet also consonent.
/*
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character here : ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("Given character is lowercase character.\n");
		
		if(ch!='a' && ch!='i' && ch!='o' && ch!='u' && ch!='e')
		{
			printf("Given character is also consonent.\n");
		}
	}
}*/


// 8) 
