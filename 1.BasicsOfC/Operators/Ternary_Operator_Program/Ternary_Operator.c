/* 1) check which of the two input numbers is greater using the ternary operator in C.

#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;

    int c = (a > b) ? a : b;

    printf("%d" , &c);
    return 0;

}

*/

/* 2) check number is even or odd using the ternary operator in C.

#include<stdio.h>
int main()
{
    int num;
    int even = 1;
    int odd = 0;
    
    printf("Enter a number :");
    scanf("%d" , &num);

    int Result =  (num % 2 == 0) ? even : odd ;

    printf("Result is : %d" , Result);
    
    return 0;
}

*/

/*  Example 3: Let us consider another example to check if a person is a minor or an adult using the 
    ternary operators.  

    #include<stdio.h>
    int main()
    {
        int age ;
    
        printf("Enter a age : ");
        scanf("%d" , &age);
    
        char *Person = (age > 18) ? "adult" : "minor";
    
        printf("Person is : %s" , Person);
        return 0;
    }

*/

/*  Example 4: check if a year is a leap year or not using the 
    ternary operators.  

    #include<stdio.h>
    int main()
    {
        int year;
        
        printf("Enter here a year : ");
        scanf("%d" , &year);
        
        char *Year = (year % 4) ?  " Normal_year " : " Leap_year ";
        
        printf("Year is : %s" , Year);
        return 0;
    }

    */

/*  Example 5: Write a C program to check whether character is an alphabet or not.  

#include<stdio.h>
int main()
{
    char Alpha;
    
    printf("Enter a Alpha : ");
    scanf("%c" , &Alpha);
    
    char *Character = ((Alpha >= 'a' && Alpha <= 'z') || (Alpha >= 'A' && Alpha <= 'Z')) ? "Alphabet" : "Not_Alphabet";
    
    printf("Character is : %s" , Character);
    return 0;
}

*/

    
    
// Example 6 : X is greater or not.
/*
#include<stdio.h>
int main()
{
	int x;
	
	
	printf("Enter a x:");
	scanf("%d",&x);
	
	printf(x>5 ? "greater" : "smaller");

	return 0;
}
*/

//Example 7 : voting eligible.
/*
#include<stdio.h>
void main()
{
	int age;
	
	printf("Enter your age : ");
	scanf("%d", &age);
	
	printf(age>=18 ? "adult" : "Minor");
}*/

   
// Exmaple 8 : 
/*
#include<stdio.h>
int main()
{
	int result;
	int x;
	
	printf("Enter value of x :");
	scanf("%d",&x);
	
	result = x>9 ? 1 : 0 ;
	
	printf("result is : %d", result);
} */



// Example 9 : two operands arithmatic operation.
/*
#include<stdio.h>
int main()
{
	int x,y;
	int result;
	
	printf("Enter value of x and y :");
	scanf("%d%d",&x , &y);
	
	result = (x>y) ? (x-y) : (x+y);
	
	printf("Result is : %d",result);
}*/


// Example 10 : 
/*
#include<stdio.h>
int main()
{
	int x,y;
	int result;
	
	printf("Enter a value of x & y :");
	scanf("%d%d",&x,&y);
	
	result = x>y ? x/y : (x=0 ? 0 : x*y);
	printf("result is : %d",result);
}*/

//example 11:
/*
#include<stdio.h>
int main()
{
	int x,y;
	int result;
	
	printf("Enter a value of x & y :");
	scanf("%d%d",&x,&y);
	
	result = x>y ? x/y : (x==0 || y==0 ? 0 : x*y);
	
	printf("result is : %d",result);
} */



                                         //          Homework      =    12 jun 2025     //
                                         
                                         
// Example 12 :  Find maximum between two number using ternary operator.
/*
#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int max;
	
	max = (a>b) ? a : b;
	
	printf("maximum no between above two numbers is : %d", max);
}
*/


// Example 13 : Find maximum between three numbers using an ternary operator.
/*
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a here :");
	scanf("%d",&a);
	
	int b;
	printf("Enter b here :");
	scanf("%d",&b);
	
	int c;
    printf("Enter c here :");
    scanf("%d",&c);

    int max;

    max = (a>b && a>c) ?  a : (b>c ? b : c);
    
    printf("maximum number is : %d", max);
}
*/


//  Example 14 : Create a program to find student is pass or fail,then take a marks for three subject,calculate %,
//    use ternary operator to find students is pass or fail,if % is equal to 35% ,then he is fail and above 35% he is pass.
/*
#include<stdio.h>
int main()
{
	float math= 35;
	float science= 35;
	float english= 35;
	
	float avg = (math + science + english);
	
	float percentage = ((avg/300)*100);
	
	printf("Percentage is : %.2f\n",percentage);
	printf("Student is : %s", (percentage>35) ? "pass" : "Fail" );
}*/ 


// Example 15 : Find percentage of five subject and also find grade.
/*
#include<stdio.h>
int main()
{
	float maths = 70;
	float science = 70;
	float physics = 70;
	float chemistry = 70;
	float language = 70;
	
	float avg=(maths+science+physics+chemistry+language);
	
	float per = ((avg/500)*100);
	
	char grade= (per>=90) ? 'A' : (per>=60) ? 'B' : (per>=40) ? 'C' : (per>=35) ? 'P' : 'F';
	
	printf("Percentage of students : %.2f%%\n",per);
	printf("Grade of student is : %c", grade); 
}
*/
                                 
                                    //     Homework   =   13 jun 2025      //

//  Example 16 : Write a program to calculate a area of circle.
/*
#include<stdio.h>
int main()
{
	float radius = 2.0;
	float pie = 3.14;
	
	float areaOfCircle = pie*radius*radius;
	
	printf("Area of Circle is : %.2f", areaOfCircle);
}*/


// Example 17 : Write a program to calculate a area of triangle.
/*
#include<stdio.h>
int main()
{
	float height;
	printf("Enter a height of triangle : ");
	scanf("%f",&height);
	
	float base;
    printf("Enter a base of triangle : ");
    scanf("%f",&base);


    float areaOfTriangle = (0.5)*base*height;
	
	printf("Area of traingle is : %.2f", areaOfTriangle);
}
*/

// Example 18 : Write a program to calculate a area of square.
/*
#include<stdio.h>
int main()
{
	float side;
	printf("Enter a side of square : ");
	scanf("%f",&side);
		
    float areaOfSquare = side*side;
    
	printf("Area of square : %f", areaOfSquare);
}*/

// Example 19 : Write a program to calculate a area of rectangle.
/*
#include<stdio.h>
int main()
{
	float length;
	printf("Enter a length of rectangle : ");
	scanf("%f",&length);
	
	float width;
	printf("Enter a width of rectangle : ");
	scanf("%f",&width);
	
	float areaOfRectangle = length*width;
	
	printf("Area of rectangle : %.2f", areaOfRectangle);
}*/


//  Example 20 : Write a program to calculate area of paralelogram.
/*
#include<Stdio.h>
int main()
{
	float base;
	printf("Enter a base of paralelogram : ");
	scanf("%f",&base);
	
	float height;
	printf("Enter a height of paralelogram : ");
	scanf("%f",&height);
	
	float areaOfParalelogram = base*height;
	
	printf("Area of Paralelogram : %.2f", areaOfParalelogram);
}*/




