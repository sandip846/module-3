#include <stdio.h>
int main ()
{
	int arr[3][4],i,j;
	
	printf("\n enter the element = \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf(" \n element is[%d][%d]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n ");
	}
		
	return 0;
}
