#include<stdio.h>
int main()
{
	int row,i,j,k=1;
	printf("\n Enter the row number = ");
	scanf("%d",&row);

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	
	return 0;
}
