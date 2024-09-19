#include <stdio.h>
int main()
{
	int year;
	
	printf("\n enter the year= ");
	scanf("%d",&year);
	
	
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("\n %d is leap year",year);
	}
	else
	{
		printf("\n %d is not leap year",year);
		
	}
	return 0;
}
