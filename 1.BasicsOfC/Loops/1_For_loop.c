// 1) Print 1 to 10.

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


// 2) Print 10 to 1.

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


// 3) Print a square for 1 to 10.

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


// 4) Print a cube for 1 to 10.

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


// 5) Print a table.

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


// 6) Print even no.

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

//7) Print odd no.

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


// 8) Print the sum for 1 to 10 with user.

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



// 9) Print the sum for 1 to 10 with user.
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

// 10) Print the sum of even no thier sum.

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



//  11) Print the sum of odd no.

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


// 12) Print both even and odd no.

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


// 13) Print the factorial of entered no with user.

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

// 14) Print the factorial of entered no.
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


//  15) print the 563 in reverse order.

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

 
//   16) Print the palindrom number.

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


// 17) Armstrong no.

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


// 17) Addition of 3 no.

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


//  18) Increments of three varibales.
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


// 19) Two variables increment n decrement.

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


// 20) print i varibale.
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
