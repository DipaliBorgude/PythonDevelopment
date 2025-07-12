                                   ////           While loop         ////

// Its a pretested loop,based on the condition.


//  1) Print 1 to 10 :
/*
#include<Stdio.h>
int main()
{
	int i=0;
	
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
}*/


//  2) Print DIPALI,20 times.

/*
#include<stdio.h>
int main()
{
	int i=0;
	
	while(i<=20)
	{
		printf("Dipali\n");
		i++;
	}
}*/



//  3) Print the addition.
/*
#include<Stdio.h>
int main()
{
	int i=1;
	int sum=0;
	
	while(i<=5)
	{
		sum=sum+i;
		i++;
	}
	printf("%d\n",sum);
}*/


                                                //   Homework   = 24 jun 2025   //
                                                
                                                
 // 4) 5 table by using while loop.
 /*
 #include<stdio.h>
 int main()
 {
 	int i=1;
 	int j;
 	printf("Enter here number :");
 	scanf("%d",&j);
 	
 	while(i<=10)
 	{
 	  printf("%d*%d=%d\n",j,i,j*i);
 	  i++;
	 }
 }*/
 
 
 // 5) Write a program to calculate a sum of even numbers between 1 to 10.
 /*
 #include<stdio.h>
 int main()
 {
 	int number=1;
 	int sum_of_even=0;
 	
 	while(number<=10)
 	{
 		if(number%2 == 0)
 		{
 		   sum_of_even=sum_of_even+number;	
		}
		number++;
	}
	printf("Sum of even numbers between 1 to 10 : %d\n",sum_of_even);
 } */
 
 
 //  6) Write a program to calculate a sum of odd numbers between 1 to 10.
 /*
 #include<stdio.h>
 int main()
 {
 	int number=1;
 	int sum_of_odd=0;
 	
 	while(number<=10)
 	{
 		if(number%2 != 0)
 		{
 			sum_of_odd=sum_of_odd+number;
		}
		number++;
	}
	printf("Sum of odd bet 1 to 10 is : %d\n",sum_of_odd);
 }*/
 
 
 
 //  7) Write a program to add number between 1 to 10.
 /*
 #include<stdio.h>
 int main()
 {
 	int i=1;
 	int sum=0;
 	
 	while(i<=10)
 	{
 		sum=sum+i;
 		i++;
	 }
	printf("Sum of numbers from 1 to 10 : %d",sum);
 }*/
 
 
 //  8) How many times while loop is executed.
 /*
 #include<stdio.h>
 int main()
 {
 	int i=0;
 	int count=0;
 	
 	while(i<=10)
 	{
 		printf("%d\n",i);
 		i++;
 		count++;
	 }
	 printf("How many times executed : %d\n",count);
 }*/
 
  
                                                    

// 9) Print 1 to 10 using while loop.
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



// 10) Print 10 to 1.
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


// 11)print square of 1 to 10.
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


// 12) Print the cube for 1 to 10.
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


// 13) Print the table.
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


// 14) Print the even no and their sum.
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


// 15) Print the odd no and their sum.
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


// 16) Print 1 to 10 and then sum of their.
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


// 17) Print the factorial.
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


// 18) Find the factorial by decrement way.
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


// 19) Reverse the number.
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


// 20) Reverse the number with user.
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



//  21) Print the palindrom number.
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



//  22) Armstrong number.

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





//  23) Fibonacci series.
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



// 24) find sum of digit of given no.

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







                                                        //  Nested while loop  //
                                                        
// print two varibales.

/*
#include<stdio.h>
int main()
{
	int i=1;
	
	
	while(i<=5)
	{
		
		int j=1;
		
		while(j<=3)
		{
			printf("%d",j);
			j++;
		}
		printf("\n");
		i++;
	}
}*/
