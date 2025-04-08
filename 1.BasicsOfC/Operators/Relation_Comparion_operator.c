//     Realtional /  Comparison Operator  //


/*  1) *equal to (==) * operator with values. 

#include<stdio.h>
int main()
{
	int a = 78;
	int b = 58;
	
	printf("value of a & b : %d" , a==b);
	
	return 0;
}

*/

/* 2) *Equal to (==) * operator without values. 

#include<stdio.h>
int main()
{
	int a;
	int b;
	
	int c;
	
	
	printf("Enter a value of a :");
	scanf("%d" , &a);
	
	printf("/nEnter a value of b :");
	scanf("%d" , &b);
	
	c = (a == b);
	
	printf("Result is c : %d" , c);
	return 0;
}

*/


/* 3) *Not equal to (!=) * operator with values. 

#include<stdio.h>
int main()
{
	int a = 12;
	int b = 12;
	
	if(a != b)
	{
		printf("Both values are Not Equal.");
	}
	
	printf("Both values are Equal.");
}
*/


/* 4) *Not equal to (!=) * operator without values. 

#include<stdio.h>
int main()
{
	int agePerson1;
	int agePerson2;
	
	printf("Enter age for person1 : ");
	scanf("%d" , &agePerson1);
	
	printf("Enter age for person2 : ");
	scanf("%d" , &agePerson2);
	
	if(agePerson1 != agePerson2)
	{
		printf("both persons age are not same");
	}
	else
	{
		printf("both persons age are same.");
	}
}

*/


/* 5) *less than (<)* operator without values. 

#include<stdio.h>
int main()
{
	int marks;
	
	printf("Enter marks here : ");
	scanf("%d" , &marks);
	
	if(marks < 35)
	{
		printf("You are Fail.");
	}
	else
	{
			printf("You are Pass");
	}
}

*/


/* 6) *less than and equal to (<=)*  operator without values. 
   
#include<stdio.h>
int main()
{
	int age;
	
	printf("Enter your age here : ");
	scanf("%d" , &age);
	
	if(age <= 18)
	{
		printf("Your minor.");
	}
	else
	{
		printf("Your adult");
	}
}
 
*/


/* 7) *Greater than (>)* operator without values. 

#include<stdio.h>
int main()
{
	int marks ;
	
	printf("Enter your marks here : ");
	scanf("%d" , &marks);
	
	if(marks > 34)
	{
		printf("Your pass.");
	}
	else
	{
		printf("Your fail.");
	}
}

*/

/* 8) * Greater than and equal to ( >= ) * operator without values. 

#include<stdio.h>
int main()
{
	int admission ;
	
	printf("no of students admission in class : ");
	scanf("%d" , &admission);
	
	if(admission >= 15)
	{
		printf("Class admission if full.");
	}
	else
	{
		printf("Class admission is vacant.");
	}
}

*/
