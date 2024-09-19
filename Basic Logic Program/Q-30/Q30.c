#include <stdio.h>
int main()
{
	int day,year;
	
	
	printf("\n enter the number of year convert to day= ");
	scanf("%d",&year);
	
	day=year*365;
	printf("\n the number of the day %d",day);
	
	printf("\n enter the number of day convert to year= ");
	scanf("%d",&day);
	
	year=day/365;
	
	printf("\n the number of year %d",year);
	
	return 0;
}
