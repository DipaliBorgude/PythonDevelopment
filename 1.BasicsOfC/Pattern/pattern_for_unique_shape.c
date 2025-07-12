//  1) Create a downword triangle using an pattern.
/*
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
} */


// 2) Create a upword traingle using an pattern.
/*
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=4; i++)
	{
		for(j=4; j>=i; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
} */


// 3) 
/*
#include<Stdio.h>
int main()
{
	int i,j,k;
	
	for(i=1; i<=4; i++)
	{
		for(j=3; j>=i; j--)
		{
			printf("-");
	    }
		for(k=1; k<=i; k++)
		{
		   	printf("*");
		}
		
		printf("\n");
	}
}*/


//  4)
/*
#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=1; i<=4; i++)
	{
		for(j=2; j<=i; j++)
		{
			printf("-");
		}
		for(k=4; k>=i; k--)
		{
			printf("*");
		}
		printf("\n");
	}
} */




//  5) Create a triangle using ABCD in pattern.
/*
#include<Stdio.h>
int main()
{
	int i,j;
	char ch='A';
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%c ",ch);
			if(i==)
    	}
    	ch++;
		printf("\n");
	}
}  
*/


//  6) Create a traingle shape pattern using 1234.
/*
#include<Stdio.h>
int main()
{
	int i,j;
	int m=1;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			  printf("%d ",m);    
		}
		m++;
		printf("\n");
	}
} */



//  7) Create a triangle shape pattern using alphabets.
/*
#include<stdio.h>
int main()
{
	int i,j;
	int m=1;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",m);
		}
		m++;
		printf("\n");
	}
}  */



//    8) Create a boolean shape pattern using 1 0 values.
/*
#include<Stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			if((i+j)%2 == 0)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
			m++;
		}
		printf("\n");
	}
} */


//   9) 
/*
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=5; i++)
	{
		for(j=5; j>=i; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
} */



//  10) 
/*
#include<stdio.h>
int main()
{
	int i,j;
	char ch1='A';
	char ch2='C';
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=4; j++)
		{
			if(i==1)
			{
				printf("%c ",ch1);
				ch1++;
			}
			else if(i>=2 && j==4)
			{
				printf("%c ",ch2);
				ch2--;
			}
			else if((i==2 && j==2) || (i==2 && j==3) || (i==3 && j==3))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
} */


//  11)  
/*
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1)
} */


//   12)  
/*
#include<stdio.h>
int main()
{
	int i,j,k,l;
	
	for(i=1; i<=5; i++)
	{
		for(j=4; j>=i; j--)
		{
			printf("  ");
		}
		for(k=1; k<=i; k++)
		{
			printf("* ");

		}
		for(l=1; l<i; l++)
		{
			printf("* ");
		}

		printf("\n");
	}
} */





//  Create a diamond shape pattern using *.

#include<stdio.h>
int main()
{
	int i,j,k,m;
	int a,b,c,d;
	
	for(i=1; i<=5; i++)
	{
		for(j=4; j>=i; j--)
		{
			printf("-");
		}
		for(k=1; k<=i; k++)
		{
			printf("*");
		}
		for(m=1; m<i; m++)
		{
			printf("*");
		}

		printf("\n");
	}
	
	for(a=1; a<=4; a++)
	{
		for(b=3; b>=1; b--)
		{
			printf("_");
		}
	//	for(c=1; c<=4; c++)
	//	{
	//		printf("_");
	//	}
		printf("\n");
	}
}
