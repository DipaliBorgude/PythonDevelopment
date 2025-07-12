// 1) Print number from 1 to 10.
/*
#include<Stdio.h>
int main()
{
	int i;
	
	for(i=0; i<=10; i++)
	{
		printf("Number from 1 to 10 : %d\n",i);
	}
} */


//  2) Sum of 1 to 10.
/*
#include<stdio.h>
int main()
{
	int i; 
	int sum=0;
	
	for(i=1; i<=10; i++)
	{
		sum=sum+i;
	}
	printf("Sum of number from 1 to 10 : %d",sum);
}*/


// 3) Write a program to print a char from a to z.
/*
#include<Stdio.h>
int main()
{
	char ch;
	
	for(ch='a'; ch<='z'; ch++)
	{
		printf("%c\n",ch);
	}
}*/


                                                //     Homework  =  25 jun 2025    //



//  4) Write a program to calculate factorial.
/*
#include<stdio.h>
int main()
{
	int m;
	printf("Enter i/p no here :");
	scanf("%d",&m);
	
	int i;
	
	int fact=1;
	
	for(i=m; i>=1; i--)
	{
		fact=fact*i;
	}
	printf("Factoril is : %d",fact);
}*/




//  5) Write a program to generate fibonacci series.
/*
#include<stdio.h>
int main()
{
	int a=0;
	int b=1;
	int c=0;
	int x;
	
	for(x=1; x<=20; x++)
	{
	  printf(" %d ",c);
	  a=b;
	  b=c;
	  c=a+b;
    }
}*/



//  6) Write a program to find out even and odd also thier sum.
/*
#include<stdio.h>
int main()
{
	int i;
	int sum_even=0;
	int sum_odd=0;
	
	for(i=1; i<=20; i++)
	{
		if(i%2 == 0)
		{
			sum_even=sum_even+i;
			printf("Even : %d\n", i);			
	 }
		else
		{
			sum_odd=sum_odd+i;
			printf("Odd : %d\n",i);
		}
	}
	printf("Sum of even no are as : %d\n",sum_even);
	printf("Sum of odd no are as : %d\n",sum_odd);
}*/


// 7) Print 1 to 10.
/*
#include<stdio.h>
int main()
{
	int x;
	
	for(x=1; x<=10; x++)
	{
		printf("\nprint value of x : %d",x);
	}
	return 0;
}
*/


// 8) Print 10 to 1.
/*
#include<stdio.h>
int main()
{
	int i;
	
	for(i=10; i>=1; i--)
	{
		printf("\nValue of i is : %d",i);
	}
	return 0;
}*/


// 9) Print a square for 1 to 10.
/*
#include<stdio.h>
int main()
{
	int x;
	
	for(x=1; x<=10; x++)
	{
		printf("\n : %d" , x*x);
	}
	return 0;
}
*/


// 10) Print a cube for 1 to 10.
/*
#include<stdio.h>
int main()
{
	int x;
	
	for(x=1; x<=10; x++)
	{
		printf("\n%d ",x*x*x);
	}
	return 0;
}
*/


// 11) Print a table.
/*
#include<Stdio.h>
int main()
{
	int m;
	printf("Enter a value :");
	scanf("%d",&m);
	
	int i;
	for(i=1; i<=10; i++)
	{
		printf("\n%d",i*m);
	}
	return 0;
}
*/


// 12) Print even no.
/*
#include<stdio.h>
int main()
{
	int i;
	int x=2;
	
	for(i=1; i<=10; i++)
	{
		if(i%x == 0)
		{
	    	printf("\nEven no are : %d", i);
        } 
	}
	return 0;
}
*/

// 13) Print odd no.
/*
#include<stdio.h>
int main()
{
	int i;
	  
	for(i=1; i<=10; i++)
	{
		if(i%2 != 0)
		{
			printf("\nOdd no are : %d",i);
		}
	}
}*/


// 14) Print the sum for 1 to 10 with user.
/*
#include<stdio.h>
int main()
{
	int i;
	int sum=0;
	
	for(i=1; i<=10; i++)
	{
	   sum=sum+i;	
	}
	printf("Sum of 1 to 10 is :%d",sum);
}*/



// 15) Print the sum for 1 to 10 with user.
/*
#include<stdio.h>
int main()
{
	int i;
	int sum;
	printf("Enter value of sum");
	scanf("%d",&sum);
	
	for(i=1; i<=10; i++)
	{
		sum=sum+i;
	}
	printf("Sum of 1 to 10 : %d", sum);
}*/


// 16) Print the sum of even no thier sum.
/*
#include<stdio.h>
int main()
{
	int i;
	int sum=0;
	
	for(i=1; i<=10; i++)
	{
	     	if(i%2==0)
		      {
		    	sum=sum+i;
              }
  	}
	printf("Sum of even no. : %d",sum);
}*/



//  17) Print the sum of odd no.
/*
#include<stdio.h>
int main()
{
	int i;
	int sum=0;
	
	for(i=1; i<=10; i++)
	{
		if(i%2 != 0)
		{
			sum=sum+i;
		}
	}
	printf("Print the sum of odd no : %d",sum );
}
*/


// 18) Print both even and odd no.
/*
#include<stdio.h>
int main()
{
	int i;
	
	for(i=1; i<=10; i++)
	{
		if(i%2 == 0)
		{
			printf("\nEnter number is even : %d",i);
		}
		else
		{printf("\nEnter number is odd : %d",i);
		}
	}
	return 0;
}
*/


// 19) Print the factorial of entered no with user.
/*
#include<stdio.h>
int main()
{
	int i,num;
	int fact=1;
	
    printf("Enter num here : ");
    scanf("%d",&num);
    
    for(i=1; i<=num; i++)
    {
    	fact=fact*i;
	}
	printf("Print the factorial value here : %d", fact);
}*/



// 20) Print the factorial of entered no.
/*
#include<stdio.h>
int main()
{
	int i;
	int num=6;
	int fact=1;
	
	for(i=1; i<=num; i++)
	{
		fact=fact*i;
	}
	printf("factorial of 6 is : %d" , fact);
}*/


//  21) print the 563 in reverse order.
/*
#include<stdio.h>
int main()
{
	int rev=0;
	int n=563;
	int rem;
	
	for(n=563; n!=0;)
	{
		rem=n%10;
		rev=rev*10+rem;
		
		n=n/10;
	}
	printf("Reverse order of 563 : %d", rev);
}
*/

 
//  22) Print the palindrom number.
/*
#include<stdio.h>
int main()
{
	int n;
    printf("Enter number here : ");
    scanf("%d",&n);
    
    int rev=0;
    int rem;
    int temp;
    
    temp=n;              // here,we stored the value of n into temp varibale,for compariaon,as we are doing equality comparison bet rev n temp after for loop,if we take 'n' instead of temp variable,in n after the execuation of for loop 0 is remaining as for loop is terminated when n is becomes equal to 0.SO we cant compare rev with 0,thats why we store the n into temp in the start of the program.    
  
    for(; n!=0;)
    {
    	rem = n%10;
    	rev=rev*10+rem;
    	
    	n=n/10;
	}
	if(rev == temp)
	{
		printf("Given nnumber is palindrom no.");
	}
	else
	{
		printf("Given number is not palindrom no.");
	}
}*/


// 23) Armstrong no.
/*
#include<stdio.h>
int main()
{
	int i;
	printf("Enter no here : ");
	scanf("%d",&i);
	
	int rem;
	int cube;
	int sum;
	int temp;
	
	temp = i;
	
	for(; i!=0;)
	{
		rem=i%10;
		
		cube = rem*rem*rem;
		
		sum=sum+cube;
		
		i=i/10;
	}
	
	if(sum==temp)
	{
		printf("Given number is armstrong no.");
    }
    else
    {
    	printf("Given number is not armstrong no.");
	}
}*/


//  24) Print addition of three number.
/*
#include<stdio.h>
int main()
{
	int a,b,c;
	
	for(a=0,b=12,c=23;a<2;a++)
	{
		printf("\n%d",a+b+c);
	}
}*/


//  25) Increments of three varibales.
/*
#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=0,j=0,k=0;i<4,j<8,k<10;i++)
	{
		printf("\n%d %d% d",i,j,k);
		
		j+=2;
		k+=3;
	}
}*/


// 26) Two variables increment n decrement.

/*
#include<stdio.h>
int main()
{
	int i=0,j=2;
	
	for(i=0;i<5;i++,j=j+2)
	{
		printf("\n%d %d",i,j);
	}
}*/


// 27) print i varibale.
/*
#include<stdio.h>
int main()
{
	int i;
	
	for(i=0;i<10;i++)
	{
		int i=20;
		printf("\n%d",i);
	}
}*/
