                                                      // While loop  
                                                      
// Its a pretested loop,based on the condition.

// 1) Print 1 to 10 using while loop.
/*
#include<Stdio.h>
int main()
{
	int i;
	
	while(i<=10)
	{
		printf("\n%d",i);
		i++;
	}
}*/


// 2) Print 10 to 1.
/*
#include<stdio.h>
int main()
{
	int i=10;
	
	while(i>=1)
	{
		printf("\n%d",i);
		i--;
	}
}*/


// 3)print square of 1 to 10.
/*
#include<stdio.h>
int main()
{
	int i;
	
	while(i<=10)
	{
		printf("\nprint the square : %d",i*i);
		i++;
	}
}*/


// 4) Print the cube for 1 to 10.

/*
#include<stdio.h>
int main()
{
	int i;
	
	while(i<=10)
	{
		printf("\nprint the cube : %d",i*i*i);
		i++;
	}
}*/


// 5) Print the table.

/*
#include<stdio.h>
int main()
{
	int i;
	int m;
	printf("Enter number : ");
	scanf("%d",&m);
	
	while(i<=10)
	{
		printf("\n%d", i*m);
		i++;
	}
}*/

// 6) Print the even no and their sum.
/*
#include<stdio.h>
int main()
{
	int i;
	int x=2;
	int sum;
	
	while(i<=10)
	{
		if(i%x == 0)
		{
		printf("\nEven no are : %d",i);
		sum=sum+i;
		}
     	i++;
	}
	printf("sum of even is : %d",sum);
}*/


// 7) Print the odd no and their sum.
/*
#include<stdio.h>
int main()
{
	int i;
	int x=2;
	int sum;
	
	while(i<=10)
	{
		if(i%x != 0)
		{
			printf("\nOdd no are : %d ",i);
			sum=sum+i;
		}
		i++;
	}
	printf("\nSum of odd no : %d",sum);

} */


// 8) Print 1 to 10 and then sum of their.
/*
#include<stdio.h>
int main()
{
	int i;
	int sum;
	
	while(i<=10)
	{
		printf("\nPrint 1 to 10 : %d",i);
		sum=sum+i;
		i++;
	}
	printf("\nPrint the sum : %d", sum);
}*/


// 9) Print the factorial.
/*
#include<Stdio.h>
int main()
{
	int i=1;
	int n=5;
	int fact=1;
	
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Print the factorial of given num : %d",fact);
}*/


// 10) Find the factorial by decrement way.
/*
#include<Stdio.h>
int main()
{
	int num=6;
	int fact=1;
	
	while(num>=1)
	{
		fact = fact*num;
		num--;
	}
	printf("Print the factorial of 6 : %d", fact);
}*/


// 11) Reverse the number.
/*
#include<stdio.h>
int main()
{
	int rev=0;
	int rem;
	int i=456;
	
	while(i != 0)
	{
		rem = i%10;
		rev = rev*10+rem;
		
		i=i/10;
	}
	printf("Print the number in reverse order : %d", rev);
}*/


// 12) Reverse the number with user.
/*
#include<stdio.h>
int main()
{
	int rem;
	int num;
	printf("Enter num here : ");
	scanf("%d", &num);
	
	int rev=0;
	
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		
		num=num/10;
	}
	printf("Print the reverse no : %d",rev);
}*/



//  13) Print the palindrom number.
/*
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	int rev=0;
	int rem;
	int temp;
	
	temp=num;
	
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		
		num=num/10;
	}
	if(rev == temp)
	{
		printf("Entered number is palindrom number.");
	}
	else
	{
		printf("Entered number is not palindrom number.");
	}
}*/



//  14) Armstrong number.

/*
#include<Stdio.h>
int main()
{
	int rem;
	int sum=0;
	int num=153;
	int temp;
	
	temp=num;
	
	while(num!=0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		
		num=num/10;
	}
	if(sum == temp)
	{
		printf("Entered number is armstrong number.");
	}
	else
	{
		printf("Entered number is not armstrong number.");
	}
	
}*/





//  15) Fibonacci series.
/*
#include<stdio.h>
int main()
{
	int x=0, y=1 , z=0;
	int num;
	printf("Enter num here : ");
	scanf("%d",&num);
	
	while(z<=num)
	{
		printf("%d\n",z);
		x=y;
		y=z;
		z=x+y;
	}
}*/



// 16) find sum of digit of given no.

/*
#include<stdio.h>
int main()
{
	int num;
	printf("Enter num here : ");
	scanf("%d",&num);
	
	int sum=1;
	int rem;
	
	while(num!=0)
	{
		rem=num%10;
		sum=sum*rem;
		
		num=num/10;
	}
	printf("%d",sum);
}*/
