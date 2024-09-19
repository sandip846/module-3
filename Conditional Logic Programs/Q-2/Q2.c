#include <stdio.h>
int main ()
{
	int m;
	printf("\n enter the value of m= ");
	scanf("%d",&m);
	
	
	if(m==0)
	{
		printf(" num=0");
		
	}
	else if(0<m)
		{
			printf("num=1");
		}
	else
	{
		printf("num=-1");
	}
	return 0;
}
