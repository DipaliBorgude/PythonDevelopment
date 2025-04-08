//Find no is positive or negative also even or odd using nested if else conditional statement.

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
}
