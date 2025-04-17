// Switch statement

/*  1) Check num is equal to 10,50 or 100 or not.

#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter a number : ");
	scanf("%d" , &num);
	
	switch(num)
	{
		case 10:
		printf("Number is equal to 10.");
		break;
		
		case 50:
		printf("Number is equal to 20.");
		break;
		
		case 100:
		printf("Number is equal to 100.");
		break; 
    
        default:
        printf("Not valid number.");
    }
    
}*/


//  2) Check x & y value.

/*
#include<stdio.h>
int main()
{
int x=10;
int y=5;

switch( x>y && x+y>0)
{
	case 1:
    printf("hi");
    break;
    
    case 0:
    printf("bye");
    break;
    
    default:
    printf("Hello bye");
    
}
    
}*/


// 3) Check which day is holiday in a week.

/*
#include<stdio.h>
int main()
{
	int day = 7;
	
	switch(day)
	{
		case 1:
			printf("Holiday is on Monday.");
			break;
			
		case 2:
			printf("Holiday is on Tuesday.");
			break;
			
		case 3:
			printf("Holiday is on Wednesday.");
			break;
			
		case 4:
			printf("Holiday is on Thursday.");
			break;
			
		case 5:
			printf("Holiday is on Friday.");
			break;
			
		case 6:
			printf("Holiday is on Saturday.");
			break;
			
		case 7:
			printf("Holiday is on Sunday.");
			break;
			
		default:
		printf("Entered value is invalid.");
	}
}*/


// 4) Check whether character is uppercase or not.

/*
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character here:");
	scanf("%c",&ch);
	
	switch(ch>='A' && ch<='Z')
	{
		case 1:
			printf("Character is Uppercase.");
			break;
			
		case 0:
			printf("Character is lowercase");
			break;
			
		default:
			printf("Entered value is invalid.");
	}
}*/



// 5) Check whether given character is vowel or not.

/*
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character here :");
	scanf("%c",&ch);
	
	switch(ch=='a' || ch=='i' || ch=='e' || ch=='o' || ch=='u')
	{
		case 1:
			printf("Enter character is vowel.");
			break;
			
		case 0:
			printf("Enter character is not vowel.");
			break;
			
		default:
			printf("Enter value is invalid");
	}
}
*/


// 6) Check whether given character is consonent or not.

/*
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character here :");
	scanf("%c",&ch);
	
	switch(ch!='a' && ch!='i' && ch!='e' && ch!='o' && ch!='u' && ch!='A' && ch!='I' && ch!='E' && ch!='O' && ch!='U')
	{
		case 1:
			printf("Enter character is consonent.");
			break;
			
		case 0:
			printf("Enter character is  vowel.");
			break;
			
		deafult:
			printf("Enter value is invalid.");
	}
}
*/


// 7) Find maximum no between two numbers.

/*
#include<stdio.h>
int main()
{
	int x=35;
	int y=78;
	
	switch(x>y)
	{
		case 1:
			printf("x is greater than y.");
			break;
			
		case 0:
			printf("y is greater than x.");
			break;
			
		default:
			printf("Output is invalid.");
	}
}
*/

// 8) Check whether no is even or odd.

/*
#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number here:");
	scanf("%d",&x);
	
	switch(x%2==0)
	{
		case 1:
			printf("Enter value is Even.");
			break;
			
		case 0:
			printf("Enter value is odd.");
			break;
			
		deafult:
			printf("Enter value is invalid.");
	}
}
*/

// 9) Print total no of days in a month.

/*
#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number here:");
	scanf("%d",&x);
	
	switch(x)
	{
		case 28:
			printf("28 days in a month.");
			break;
			
		case 29:
			printf("29 days in a month.");
			break;
			
		case 30:
			printf("30 days in a month.");
			break;
		
		case 31:
			printf("31 days in a month.");
			break;
	}
}
*/


// 10) Check whether no is positive,negative.

/*
#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number is here:");
	scanf("%d",&x);
	
	switch(x>0)
	{
		case 1:
			printf("Enter no is postive.");
			break;
			
		case 0:
			printf("Enter no is negative.");
			break;
			
		default:
		   printf("Enter no is invalid.");
	}
}
*/
