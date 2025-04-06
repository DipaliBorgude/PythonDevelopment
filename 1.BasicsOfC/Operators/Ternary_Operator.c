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

    
    


