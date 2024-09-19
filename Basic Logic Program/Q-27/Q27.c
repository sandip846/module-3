#include <stdio.h>
#define dayinmonth 30
int main()
{
	int totalday,month,rem;
	printf("\n enter the day= ");
	scanf("%d",&totalday);
	
	month=totalday/dayinmonth;
	rem= totalday%dayinmonth;
	
	printf("\n %d days is approximately %d months and %d days",totalday,month,rem);

	return 0;
}
