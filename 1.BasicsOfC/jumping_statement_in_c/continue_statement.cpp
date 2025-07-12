// 1) continue statement.

#include<Stdio.h>
int main()
{
	int i,j;
	
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=3; j++)
		{
		//	printf("%d%d ",i,j);
			
			if(i==2 && j==2)
			{
				continue;
			}
			printf("%d%d ",i,j);
		}
	}
}
