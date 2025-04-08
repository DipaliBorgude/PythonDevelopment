// Switch statement

/*  1) Check num is equal to 10,50 or 100 or not.

#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter a number : ");
	scanf("%d" , &num);
	
	switch(num)
	{
		case 10:
		printf("Number is equal to 10.");
		break;
		
		case 50:
		printf("Number is equal to 20.");
		break;
		
		case 100:
		printf("Number is equal to 100.");
		break; 
    
        default:
        printf("Not valid number.");
    }
    
}*/


//  2)

/*
#include<stdio.h>
int main()
{
int x=10;
int y=5;

switch( x>y && x+y>0)
{
	case 1:
    printf("hi");
    break;
    
    case 0:
    printf("bye");
    break;
    
    default:
    printf("Hello bye");
    
}
    
}*/


// 3) Check which day is 

//Nested Switch statement

/*
#include<stdio.h>
int main()
{
	int i =10;
	int j =20;
	
	switch(i)
	{
		case 10:
		printf("the value of i is evaluated in outer switch : %d\n" , i);
			
		case 20:
			switch(j)
				{
					case 20:
					printf("the value of j is evaluated in nested switch : %d\n" , j);
				}
			
	}
	
	printf("Exact value of i is : %d\n" , i);
	printf("Exact value of j is : %d\n" , j);
	
	return 0;
}*/
