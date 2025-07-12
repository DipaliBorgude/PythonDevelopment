//  1) Create a function for addition of three number with argument and without return type.

#include<stdio.h>
void sum();

int main()
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
	
	sum(a,b,c);
}
void sum(x,y,z)
{
	int result=x+y+z;
	
	printf("Addition of three no = %d",result);
}



