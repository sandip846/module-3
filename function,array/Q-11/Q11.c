#include <stdio.h>
int main ()
{
	int num[5],i;
	
	printf("\n enter the 5 number = ");
	for(i=0;i<5;i++)
	{
		printf("\n enter the num %d = ",i);
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<5;i++)
	{
		printf("\n %d ",num[i]);
		printf("\n ");
		
	}
	printf("\n revese num list := ");
	
	for(i=4;i>=0;i--)
	{
		printf("\n %d ",num[i]);
		 printf("\n");
	}
	
	
	return 0;
}
