#include <stdio.h>
int main ()
{
	int num;
	printf("\n enter the week of num(1-7) = ");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("\n sunday");
	}
	else if(num==2)
	{
		printf("\n monday");
	}
	else if(num==3)
	{
		printf("\n tuesday");
	}
	else if(num==4)
	{
		printf("\n wednesday");
	}
	else if(num==5)
	{
		printf("\n thursday");
	}
	else if(num==6)
	{
		printf("\n friday");
	}
	else if (num==7)
	{
		printf("\n saturday");
	}
	else
	{
		printf("\n invalid input enter 1 to 7 ");
	}
	return 0;
}
