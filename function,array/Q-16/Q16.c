#include <stdio.h>
int main ()
{
	int arr[100],size,i,sum=0;
	printf("\n enter the size = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n number[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		sum= sum+arr[i];
	}
	printf("\n total num sum = %d ",sum);
	
	
	return 0;
}
