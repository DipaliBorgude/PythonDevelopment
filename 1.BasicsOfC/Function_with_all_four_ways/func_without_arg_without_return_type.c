// 1) print a kdn using function.
/*
#include<Stdio.h>
 void display();
 
 int main()
 {
 	display();
 }
 void display()
 {
 	printf("kdn");
 } */
 
 
//  2) Print sum of three number.
/*
#include<stdio.h>
void sum();
int main()
{
	sum();
}
void sum()
{
	int a,b,c,result;
	printf("Enter a,b,c here : ");
	scanf("%d%d%d",&a,&b,&c);
	
	result=a+b+c;
	
	printf("sum = %d",result);
} */


//  3) Create a function for sum of n number.
/*
#include<Stdio.h>
void sum();
int main()
{
	sum();
}
void sum()
{
	int n,i;
	int result=0;
	
	printf("Enter n here :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		result=i+result;
	}
		printf("sum of n number = %d",result);

}*/



// 4) Create a function for sum,sub,mul,div.
/*
#include<stdio.h>
void sum();
void sub();
void mul();
void div();

int main()
{
	sum();
	sub();
	mul();
	div();
}
void sum()
{
	int a,b,add;
	printf("Enter a & b here : ");
	scanf("%d%d",&a,&b);
	
	add=a+b;
	
	printf("Sum of a & b is = %d\n",add);
}
void sub()
{
	int a,b,result;
	printf("Enter a & b here : ");
	scanf("%d%d",&a,&b);
    
    result=a-b;
    
    printf("Substraction of a & b is = %d\n",result);
}
void mul()
{
	int a,b,result;
	printf("Enter a & b here : ");
	scanf("%d%d",&a,&b);

    result=a*b;

    printf("Multiplication of a & b is = %d\n",result);
}
void div()
{
	int a,b,result;
	printf("Enter a & b here : ");
	scanf("%d%d",&a,&b);

    result=a/b;

    printf("Division of a & b is = %d\n",result);

}  */



//  5) Write a program to create a function to find given no is even or odd.
/*
#include<Stdio.h>
void evenOdd();
int main()
{
	evenOdd();
}
void evenOdd()
{
	int num;
	printf("Enter number here :");
	scanf("%d",&num);
	
	if(num%2 == 0)
	{
		printf("Entered number is even.");
	}
	else
	{
		printf("Entered number is odd");
	}
}*/



//  6) Write a program to create a function to find area of 
//       a)Circle  b)Triangle  c) Rectangle  d)Paralelogram
       
 /*    
 #include<stdio.h>
 
 void areaCircle();
 void areaTriangle();
 void areaRectangle();
 void areaParalelogram();
 
 int main()
 {
 	areaCircle();
 	areaTriangle();
 	areaRectangle();
 	areaParalelogram();
 }
 void areaCircle()
 {
 	int radius;
 	printf("Enter radius of circle here : ");
 	scanf("%d",&radius);
 	
 	int pie=3.14;
 	
 	int area=3.14*radius*radius;
 	
 	printf("Area of circle is %d\n",area);
 }
 
void areaTriangle()
{
	int area;
	int base;
	printf("Enter base of triangle here : ");
	scanf("%d",&base);

    int height;
	printf("Enter height of tringle here : ");
	scanf("%d",&height);
	
	area=(0.5)*base*height;
	
	printf("Area of Traingle is %d\n",area);
}

void areaRectangle()
{
	int area;
	int length;
	printf("Enter length of Rectangle here : ");
	scanf("%d",&length);
	
	int width;
	printf("Enter width of rectangle here : ");
	scanf("%d",&width);
	
	area=length*width;
	
	printf("Area of Rectangle is %d\n",area);
}

void areaParalelogram()
{
	int area;
	int base;
	printf("Enter base of paralelogram here : ");
	scanf("%d",&base);
	
	int height;
	printf("Enter height of paralelogram here : ");
	scanf("%d",&height);
	
	area=base*height;
	
	printf("Area of paralelogram is %d",area);
} */      
       
       
       
//  7) Write a function for calculating factorial of any number.
/*
    #include<stdio.h>
    void fact();
    int main()
    {
    	fact();
	}
	void fact()
	{
		int fact=1;
		int i,num;
		printf("Enter number here :");
		scanf("%d",&num);
		
		for(i=num; i>=1; i--)
		{
			fact=fact*i;
		}
		printf("Factorial is : %d",fact);
}  */
	


//  8) Write a function for performing all bitwise operator.
/*
#include<stdio.h>
void And();
void Or();
void Xor();

int main()
{
	And();
	Or();
	Xor();
}
void And()
{
	int i=11; 
	int j=20;
	
	printf("Bitwise AND operator for 11 & 20 is : %d\n",i&j);
}

void Or()
{
	int i=20;
	int j=30;
	
	printf("Bitwise OR operator for 20 & 30 is : %d\n",i|j);
}

void Xor()
{
	int i=40;
	int j=30;
	
	printf("Bitwise Xor operator for 40 & 30 is : %d\n",i^j);
} */






//  9) Write a function to calculate % of student,also find out student is pass or fail.
/*
#include<Stdio.h>
void grade();

int main()
{
	grade();
}
void grade()
{
	int sub1,sub2,sub3,sub4,sub5;
	printf("Enter sub1,sub2,sub3,sub4,sub5 marks here : ");
	scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
	
	float total_marks=(sub1+sub2+sub3+sub4+sub5);
	
	float per=(total_marks/500)*100;
	
	printf("Percentage of student = %g\n",per);
	
	if(per>=35)
	{
		printf("Student is pass.");
	}
	else
	{
		printf("Student is fail.");
	}
	
	
}*/






//  10 ) Write a c program to create a function to swapping numbers.
/*
#include<stdio.h>
void swap();
int main()
{
	swap();
}
void swap()
{
	int num;
	printf("Enter num here :");
	scanf("%d",&num);
	
	int i;
	int rev=0;
	int rem=0;
	
	for(i=num; i!=0;)
	{
		rem=i%10;
		rev=rev*10+rem;
		
		i=i/10;
	}
	printf("%d",rev);
} */





//  11) Write a c program to create a function for finding given number is prime number  or not.
/*
#include<stdio.h>

void primeNum();

int main()
{
	primeNum();
}

void primeNum()
{
	int num;
	printf("Enter num here : ");
	scanf("%d",&num);
	
	int i;
	int count=0;
	
	if(num<=1)
	{
		printf("Number is not a prime number.");
		return 0;
	}
	
	for(i=1; i<=num; i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	
	if(count==2)
	{
		printf("%d = Entered number is prime number.",num);
	}
	else
	{
		printf("Entered number is not prime number.");
	}
}
*/




//  12) Write a function to create a fibonacci series.
/*
#include<Stdio.h>
void fibonacciSeries();
int main()
{
	fibonacciSeries();
}
void fibonacciSeries()
{
	int a=0; 
	int b=1;
	int c;
	int i;
	
	printf("%d ",a);
	printf("%d ",b);
	
	for(i=1; i<=10; i++)
	{
     		
		a=b;
        b=c;
		
		printf("%d ",c);
		c=a+b;
	}
} */


