// Example 1 : Check which is great.
/*
#include<Stdio.h>
int main()
{
	int a,b;
	printf("Enter a here :");
	scanf("%d",&a);
	
	printf("Enter b here :");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("a is greater.");
	}
	else if(a==b)
	{
		printf("Both are equal.");
	}
	else
	{
		printf("b is greater.");
	}
}*/



// Example 2 : Find out even ,odd and zero.
/*
#include<stdio.h>
int main()
{
	int a;
	printf("Enter number here :");
	scanf("%d",&a);
	
	if(a == 0)
	{
		printf("Entered number is zero.");
	}
	else if(a%2 == 0)
	{
		printf("Entered number is even.");
	}
	else
	{
		printf("Entered number is odd.");
	}
} */


//  Example 3 : Write a c program to calculate students grade,on the basis of score of percentage.Grade range if range 90-100 == A,80 -89  == B, 70- 79 == C,60 - 69 == D,below 60= F.
/*
#include<stdio.h>
int main()
{
    int grade;
	printf("Enter per here : ");
	scanf("%d",&grade);
	
	if(grade>= 90 && grade <= 100 )
	{
		printf("Student is passed with 'A' grade.");
	}
	else if(grade>= 80 && grade <=89)
	{
		printf("Student is passes with 'B' grade");
	}
	else if(grade>=70 && grade<=79)
	{
		printf("Student is passes with 'C' grade");
	}
	else if(grade>=60 && grade<=69)
	{
		printf("Student is passes with 'D' grade");
	}
	else
	{
		printf("Student is fail.");
	}
}*/


// Example 3: Write a c program to check wheather entered char is vowel or consonent.
/*
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character here :");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("Enter char is vowel.");
	}
	else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("Enter char is vowel.");
	}
	else
	{
		printf("Enter char is consonent.");
	}
	
}*/

                                         //         HomeWork =  18 jun 2025       //

//Example 4: Find max bet three numbers.
/*
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a here :");
	scanf("%d",&a);
	
	printf("Enter b here :");
	scanf("%d",&b);
	
	printf("Enter c here :");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("a is greater.");
	}
	else if(b>c && b>a)
	{
		printf("b is greater.");
	}
	else
	{
		printf("c is greater.");
	}
} */



// Example 5 : To check wheather triangle is valid or not.
/*
#include<stdio.h>
int main()
{
	int angle1,angle2,angle3;
	
	printf("Enter angle1 here : ");
	scanf("%d",&angle1);
	
	printf("Enter angle2 here : ");
	scanf("%d",&angle2);
	
	printf("Enter angle3 here : ");
	scanf("%d",&angle3);
	
	if(angle1+angle2+angle3 == 180 && angle1 != 0 && angle2 != 0 && angle3 != 0)
	{
		printf("Triangle is valid");
	}
	else
	{
		printf("Triangle is not valid.");
	}
} */




//  Example 6 : To check whether triangle ia valid & equilateral triangle.
/*
#include<stdio.h>
int main()
{
	int angle1;
	int angle2;
	int angle3;
	int side1;
	int side2;
	int side3;
	
	printf("Enter angle1 : ");
	scanf("%d",&angle1);
	
	printf("Enter angle2 : ");
	scanf("%d",&angle3);
	
	printf("Enter angle3 : ");
	scanf("%d",&angle3);
	
	printf("Enter side1 : ");
	scanf("%d",&side1);
	
	printf("Enter side2 : ");
	scanf("%d",&side2);
	
	printf("Enter side3 : ");
	scanf("%d",&side3);
	
	if((side1>=0) && (side1==side2) && (side2==side3))
	{
		printf("Equilateral Triangle is valid.");
	}
	else if(angle1+angle2+angle3 == 180)
	{
		printf("Triangle is valid but its not equilateral triangle.");
	}
	else 
	{
		printf("Triangle is also not valid and its not equilateral triangle.");
	}
	
} */



// Example 7 : To check whether triangle is valid and isolated triangle,side should not be zero.

/*
#include<stdio.h>
int main()
{
	int angle1;
	int angle2;
	int angle3;
	int side1;
	int side2;
	int side3;
	
	printf("Enter angle1 : ");
	scanf("%d",&angle1);
	
	printf("Enter angle2 : ");
	scanf("%d",&angle2);
	
	printf("Enter angle3 : ");
	scanf("%d",&angle3);
	
	printf("Enter side1 : ");
	scanf("%d",&side1);
	
	printf("Enter side2 : ");
	scanf("%d",&side2);
	
	printf("Enter side3 : ");
	scanf("%d",&side3);
	
	if(angle1+angle2+angle3 == 180)
	{
		printf("Triangle is valid but its not isolated triangle.");
	}
	else if(side1>= 0 && side2==side3)
	{
		printf("Isolation Triangle is valid.");
	}
	else
	{
		printf("Traingle is not valid");
	}
} */



//  Example 8 : Write a C program to take a cost price & selling price of the product & check profit & loss.ALso calculate total profit and loss.
/*
#include<stdio.h>
int main()
{
	float cost_price;
	float selling_price;
	
	printf("Enter cost_price : ");
	scanf("%f",&cost_price);
	
	printf("Enter selling_price : ");
	scanf("%f",&selling_price);
	
	if(selling_price > cost_price)
	{
		printf("You have profit & that is : \n", selling_price-cost_price);
	}
	else if(cost_price > selling_price)
	{
		printf("You have loss & that is : \n",cost_price-selling_price);
	}
	else
	{
		printf("You have no profit,no loss.\n");
	}
}*/



/* Example 9 : Write a "c" program to input electricity unit charge & calculate total electricity bill according to the following given condition.
               1) For the first 50 unit = $ 0.50 / per unit
               2) for the next 100 unit = $ 0.75 / per unit
               3) for the next 200 unit = $ 1.20 / per unit
               4) for unit above 250 unit = $ 1.50 /per unit  
*/


/*
#include<stdio.h>
int main()
{
	int electricity_unit;
	printf("Enter you electricity unit : ");
	scanf("%d",&electricity_unit);

    if(electricity_unit >= 50 && electricity_unit <= 99)
    {
    	printf("Your total elctricity bill for 50 & above unit : %f", electricity_unit*0.50);
	}
	else if(electricity_unit >= 100 && electricity_unit <= 199)
	{
		printf("Your total electricity bill for 100 & above unit : %f", electricity_unit*0.75);
	}
	else if(electricity_unit >= 200 && electricity_unit <=249)
	{
		printf("Your total electricity bill for 200 & above unit : %f", electricity_unit*1.20);
	}
	else
	{
		printf("Your total electricity bill for 250 & above unit : %f", electricity_unit*1.50);
	}
}*/






/* Example 10 : Write a C program to input basic salary of employee & calculate gross employee,
    1) if basic salary is less than 10k,then your HRA is 20% & remaining DA is 80%.
    2) if basic salary is less than 20K,then your HRA is 25% & DA is 90%.
    3) if basic salary is greater than 20k,then HRA is 30% & DA is 95%.
*/

/*
#include<stdio.h>
int main()
{
	int basic_salary;
	printf("Enter employee basic salary : ");
	scanf("%d",&basic_salary);
	
	if(basic_salary <= 10000)
	{
		printf("Then employee gross salary is : %.2f",basic_salary*0.20*0.80);
	}
	else if(basic_salary > 10000 && basic_salary <= 20000)
	{
		printf("Then employee gross salary is : %.2f",basic_salary*0.25*0.90);
	}
	else
	{
		printf("Then employee gross salary is : %.2f",basic_salary*0.30*0.95);
	}
}*/




