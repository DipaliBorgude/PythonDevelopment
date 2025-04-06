#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	
	printf("Value of a ");
	scanf("%d", &a);

    printf("\nValue of b");
    scanf("%d" , &b);
    
    c = a+b;
    printf("\nResult is : %d" , c);
    
    return 0;
}
