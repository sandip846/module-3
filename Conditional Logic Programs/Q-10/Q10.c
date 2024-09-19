#include <stdio.h>
int main()
{
	int num;
	printf("\n enter the number = ");
	scanf("%d",&num);
	
	if(0<num)
	{
		printf("\n %d number is positive",num);
	}
	else if(num==0)
	{
			printf("\n %d number is zero",num);
	}
	else
	{
		printf("\n %d number is negetive",num);
	}
	return 0;
}
