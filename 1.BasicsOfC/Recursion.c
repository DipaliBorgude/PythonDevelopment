aaaa//  1) Find a factorial of 5 using recursion.
/*
#include<Stdio.h>
int fact(int);

int main()
{
	int n,k;
	printf("Enter n here : ");
	scanf("%d",&n);
	
	k=fact(n);
	printf("%d",k);
}
int fact(int n)
{
	int f;
	if(n==1)
	{
		return 1;
	}
	else
	{
		f=n*fact(n-1);
		return f;
	}
} */


// 2) Find a sum of n numbers.
/*
#include<stdio.h>
int sum(int);

int main()
{
	int n,add;
	printf("Enter a range here :");
	scanf("%d",&n);
	
	add=sum(n);
	printf("Addition is %d",add);
}
int sum(int n)
{
	int f;
    if(n==1)
    {
    	return 1;
	}
	else
	{
		f=n+sum(n-1);
		return f;
	}
} */


//  3) Create fibbonacci series using recursion.

#include<stdio.h>
int fibbo(int,int,int);

int main()
{   
    int series=fibbo(
	int n1,int n2,int n3);
	printf("%d",series);
}
int fibbo(int n1,int n2,int n3)
{
	int f;
	
	if(n3<8)
	{
		return 8;
	}
	else
	{
		n1=0;
		n2=1;
		n1=n2;
		n2=n3;
		f=fib(n3);
		return f;
	}
}
