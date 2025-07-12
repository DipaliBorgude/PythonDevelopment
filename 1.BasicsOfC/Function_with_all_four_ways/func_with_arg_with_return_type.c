//  1) Create a function for addition of three number with argument and with return type.
/*
#include<Stdio.h>

int sum();

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
	
	
	int add=sum(a,b,c);
	printf("Addition of three number = %d",add);
}

int sum(int x, int y,int z)
{
	int result=x+y+z;
	
	return result;
}  */




//  2)  Create a function for addition of n number.

#include<stdio.h>
int sum(int);

int main()
{
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	
	int add=sum(n);
}
int sum(n)
{
	
}





//   2) Find even and odd from n number also find sum of even numbers and also find sum of odd numbers.

#include<Stdio.h>
int even(int);
int odd(int);
int sumEven(int,int);
int sumOdd(int,int);

int main()
{
	int num;
	printf("Enter number here : ");
	scanf("%d",&num);
	
	
	int evenNumber = even(num);
	int oddNumber = odd(num);
	int sumEvenNumber = sumEven(evenNumber,num);
	int sumOddNumber = sumOdd(oddNumber,num);
	
	printf("%d\n",evenNumber);
	printf("%d\n",oddNumber);
	printf("%d\n",sumEvenNumber);
	printf("%d\n",sumOddNumber);
	
}
int even(num)
{
	int i,j;
	
	for(i=1; i<=num; i++)
	{
		if(i%2 == 0)
		{
			printf("Even = %d\n",i);
        }
	}
	return i;
}


int odd(num)
{
	int j;
	for(j=1; j<=num; j++)
	{
		if(j%2 != 0)
		{
			printf("odd = %d\n",j);
		}
	}
	return j;
}

int sumEven(int esum,int num)
{
	 esum=even(num);
	
	int evensum=0;
	
	evensum=evensum+esum;
	
	return evensum;
}

int sumOdd(int oddNumber,int num)
{
	int oSum=odd();
	
	oddsum=0;
	
	oddsum=oddsum+oSum;
	
	return oddsum;
}  




