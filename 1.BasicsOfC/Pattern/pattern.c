//  Its a formation of stars,to better understand loops and also build a logic.


// 1) For loop for making stars formation.
/*
#include<stdio.h>
int main()
{
	int row=1;
	int col=1;
	
	for(row=1; row<=5; row++)
	{
		for(col=1; col<=5; col++)
		{
			printf(" *");
		}
		printf("\n");
	}
}  */


// 2) For loop for making stars formation for 5 row and 5 col.
/*
#include<stdio.h>
int main()
{
	int row=1;
	int col=1;
	
	for(row=1; row<=5; row++)
	{
		for(col=1; col<=5; col++)
		{
			printf(" *");
		}
		printf("\n");
	}
}*/


// 2) Print 1,5 times a row and in 5 times a column.
/*
#include<stdio.h>
int main()
{
	int row=1;
	int col=1;
	
	for(row=1; row<=5; row++)
	{
		for(col=1; col<=5; col++)
		{
			printf(" 1");
		}
		printf("\n");
	}
}*/


//  3) Print 1,2,3,4,5 in a separate row.
/*
#include<Stdio.h>
int main()
{
	int row=1;
	int col=1;
	
	for(row=1; row<=5; row++)
	{
		for(col=1; col<=5; col++)
		{
			printf(" %d", row);
		}
		printf("\n");
	}
}*/


//  4) Print 1,2,3,4,5 in a separate column.
/*
#include<stdio.h>
int main()
{
	int row=1;
	int col=1;
	
	for(row=1; row<=5; row++)
	{
		for(col=1; col<=5; col++)
		{
			printf(" %d",col);
		}
		printf("\n");
	}
}*/

//  5) Print a,b,c,d,e in separate row.
/*
#include<stdio.h>
int main()
{
	char row=97;
	char col=97;
	
	for(row=97; row<=101; row++)
	{
		for(col=97; col<=101; col++)
		{
			printf(" %c",row);
		}
		printf("\n");
	}
}*/

//  6) Print a,b,c,d,e in separate col.
/*
#include<stdio.h>
int main()
{
	char row=97;
	char col=97;
	
	for(row=97; row<=101; row++)
	{
		for(col=97; col<=101; col++)
		{
			printf(" %c",col);
		}
		printf("\n");
	}
}*/


// 7) Print A,B,C,D,E in sperate row.
/*
#include<stdio.h>
int main()
{
	char row=65;
	char col=65;
	
	for(row=65; row<=69; row++)
    {
	  for(col=65; col<=69; col++)
	  {
	  	printf(" %c",row);
	  }
	  printf("\n");
    }
}*/



//  8) Print A,B,C,D,E in separate col.
/*
#include<stdio.h>
int main()
{
	char row=65;
	char col=65;
	
	for(row=65; row<=69; row++)
	{
		for(col=65; col<=69; col++)
		{
			printf(" %c",col);
		}
		printf("\n");
	}
}*/


//  9) Printf special symbol in unique way.
/*
#include<Stdio.h>
int main()
{
	char row=1;
	char col=1;
	
	for(row=1; row<=5; row++)
	{
		for(col=1; col<=5; col++)
		{
			if(row == 1 || row == 3 || row == 5)
			{
				printf(" %c",35);
			}
			else
			{
				printf(" %c",64);
			}
		}
		printf("\n");
	}
}*/



//  10) Print * in box way.
/*
#include<stdio.h>
int main()
{
	int row=1;
	int col=1;
	 
	for(row=1; row<=5; row++)
	{
		for(col=1; col<=5; col++)
     	{
		   if(col==1 || col==5 || row==1 || row==5)
		   {
		   	printf(" *");
		   }
		   else
		   {
		   	printf("  ");
		   }
    	}
    	printf("\n");
	}
}*/



//  11) Print 1 to 16 in box pattern.

/*
#include<stdio.h>
int main()
{
	int x;
	int y;
	int z=1;
	
	for(x=1; x<=4; x++)
	{
		for(y=1; y<=4; y++)
		{
			printf("%d ",z );
			z++;
		}
		printf("\n");
	}
} */





// 12) Print A to P in box pattern.
/*
#include<stdio.h>
int main()
{
	int x;
	int y;
	int z=65;
	
	for(x=1; x<=4; x++)
	{
		for(y=1; y<=4; y++)
		{
			printf(" %c",z);
			z++;
		}
		printf("\n");
	}
}*/



//  13) Print a to p in box pattern.
/*
#include<stdio.h>
int main()
{
	int x;
	int y;
	int z=97;
	
	for(x=1; x<=4; x++)
	{
		for(y=1; y<=4; y++)
		{
			printf(" %c",z);
			z++;
		}
		printf("\n");
	}
} */


//  14) Create a formation of star in square format.
/*
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=3; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
} */


//  15) Create star formation for same values.
/*
#include<Stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=3; j++)
		{
			if(i==j)
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	 
}*/


                                               ///    Homework  =  28 jun 2025     //
                                               

// 16) Create * * * formation in single line.
/*
#include<Stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i==1; i++)
	{
		for(j=1; j<=4; j++)
		{
			printf("* ");
		}
	}
}*/


// 17) Create  *
//             *
//             *
             
			 
 /*  
#include<Stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=3; i++)
	{
		for(j=1; j==1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
} */


//  18)
/*
#include<Stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=3; j++)
		{
			if(i==j)
			{
				printf("a ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
} */


//  19) 
/*
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=4; i++)
	{     	
	    printf("* ");
		for(j=1; j<=4; j++)
		{
			if(i==j )
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}
		
		printf("\n");

	}
} */


// 20)  
/*
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=3; j++)
		{
			if(i==1 || i==3)
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
} */


// 21) Print N in star formation.
/*
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(i==j && i!=1 && j!=1)
			{
				printf("*");
			}
			else if((i==1 && j==1) || (i==2 && j==1) || (i==3 && j==1) || (i==4 && j==1) || (i==1 && j==5) || (i==2 && j==5) || (i==3 && j==5) || (i==4 && j==5))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
} */



//  22)  
/*
#include<Stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=5; j++)
		{
			if((i==2 && j==1) || (i==3 && j==1))
			{
				printf("a");
			}
			else if((i==2 && j==4) || (i==3 && j==4))
			{
				printf("b");
			}
			else if((i==1 && j==1) || (i==1 && j==2) || (i==1 && j==3) || (i==1 && j==4) || (i==4 && j==1) || (i==4 && j==2) || (i==4 && j==3) || (i==4 && j==4))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
} */



//  23) 
/*
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=4; j++)
		{
			if(j==1 || j==3)
			{
				printf("* ");
			}
			else
			{
				printf("a ");
			}
		}
		printf("\n");
	}
} */




//  24) 
/*
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=4; j++)
		{
			if(j==1 || j==3)
			{
				printf("b ");
			}
			else
			{
				printf("a ");
			}
		}
		printf("\n");
	}
}*/





//  25) Create square shape using pattern.
/*
#include<Stdio.h>
int main()
{
	int i;
	int j;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=4; j++)
		{
		    if((i==2 && j==1) || (i==3 && j==1))
        	{
				printf("* ");
		    }
		    else if((i==2 && j==4) || (i==3 && j==4))
		    {
		    	printf("* ");
			}
       		else if((i==1&&j==1) || (i==1&&j==2) || (i==1&&j==3) || (i==1&&j==4))
        	{
				printf("* ");
			}
			else if((j==1&&i==4) || (j==2&&i==4) || (j==3&&i==4) || (j==4&&i==4))
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

 
 
 //  26) Create 1234 square shape using pattern.
 /*
 #include<stdio.h>
 int main()
 {
 	int i,j;
 	int n=1;
 	int m=1; 
 	
 	for(i=1; i<=5; i++)
 	{
 		for(j=1; j<=5; j++)
 		{
 			if(j==1)
 		   {
 			 printf("%d",n );
 			 n++;
		   }
		    else if(j==5)
		    {
		    	printf("%d",m );
		    	m++;
			}
            else if((i==1 && j==2) || (i==1 && j==3) || (i==1 && j==4))
		   {
		      printf("1 ");	
		   }
		   else if((i==5 && j==2) || (i==5 && j==3) || (i==5 && j==4))	
		   {
		   	printf("5 ");
		   }
		   else
		   {
		   	printf("  ");
		   }
		}
		printf("\n");
	}
 	
 }*/
 
 
 //  27) Create a increment number square shape using pattern.
 /*
 #include<stdio.h>
 int main()
 {
 	int i,j;
 	int m=1;
 	
 	for(i=1; i<=5; i++)
 	{
 		for(j=1; j<=5; j++)
 		{
 			printf(" %d ", m );
 			m++;
		 }
		 printf("\n ");
	 }
 } */
 
 
 //  28) 
 /*
 #include<stdio.h>
 int main()
 {
 	int i,j;
 	
 	for(i=1; i<=5; i++)
 	{
 		for(j=1; j<=5; j++)
 		{
			if((i==1 && j==1) || (i==2 && j==2) || (i==3 && j==3) || (i==4 && j==4) || (i==5 && j==5) || (i==5 && j==1) || (i==4 && j==2) || (i==2 && j==4) || (i==1 && j==5))
			{
				printf("* ");
			}
			else if((i==1 && j==2) || (i==1 && j==4) || (i==1 && j==3) || (i==2 && j==1) || (i==3 && j==1) || (i==4 && j==1) || (i==2 && j==5) || (i==3 && j==5) || (i==5 && j==3) 
			|| (i==4 && j==5) || (i==5 && j==2) || (i==5 && j==4))
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
 }*/
 
 //  29)
 /*
 #include<stdio.h>
 int main()
 {
 	int i,j;
 	
 	for(i=1; i<=5; i++)
 	{
 		for(j=1; j<=5; j++)
 		{
 			if((i%2 || j%2) == 0)
 			{
 				printf("@ ");
			 }
			 else
			 {
			 	printf("* ");
			 }
		 }
		 printf("\n");
	 }
 	
 } */
 
 
 // 30) 
 /*
 #include<stdio.h>
 int main()
 {
 	int i,j;
 	
 	for(i=1; i<=5; i++)
 	{
 		for(j=1; j<=5; j++)
 		{
 			if((i%2 && j%2) == 0)
 			{
 				printf("* ");
			 }
			 else
			 {
			 	printf("# ");
			 }
		 }
		 printf("\n");
	 }
 } */
 
 
 
 //  31)  
 /*
 #include<Stdio.h>
 int main()
 {
 	int i,j;
 	char ch='a';
 	
 	for(i=1; i<=5; i++)
 	{
 		for(j=1; j<=5; j++)
 		{
 			printf("%c ",ch);
 			ch++;
		 }
		 printf("\n");
	 }
 } */
 
 
 //  32) 
 /*
 #include<stdio.h>
 int main()
 {
 	int i,j;
 	
 	for(i=1; i<=5; i++)
 	{
 		for(j=1; j<=5; j++)
 		{
 			if(i==1 || i==5)
 			{
 				printf("5 ");
			 }
			 else if(j==1 || j==5)
			 {
			 	printf("5 ");
			 }
			 else if((i==2 && j==2) || (i==3 && j==2) || (i==4 && j==2) || (i==4 && j==3) || (i==4 && j==4) || (i==3 && j==4) || (i==2 && j==4) || (i==2 && j==3))
			 {
			 	printf("4 ");
			 }
			 else if(i==3 && j==3)
			 {
			 	printf("2 ");
			 }
			 else
			 {
			 	printf(" ");
			 }
		 }
		 printf("\n");
	 }
 }*/
 
 
 //  33)  
  /*
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(i==1 || i==5)
			{
				printf("* ");
			}
			else if((j==1 || j==5))
			{
				printf("* ");
			}
			else if(j==3 || i==3)
			{
				printf("b ");
			}
			else if((i==2 && j==2) || (i==4 && j==2))
			{
				printf("a ");
			}
			else if((i==2 && j==4) || (i==4 && j==4))
			{
				printf("c ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
} */
