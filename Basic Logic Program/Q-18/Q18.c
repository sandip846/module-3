#include <stdio.h>
int main()
{
    double monthlysalary,ennualsalary;
	
	printf("\n enter your monthlysalary= ");
	scanf("%lf",&monthlysalary);
	
	ennualsalary = monthlysalary*12;
	
	printf(" your annualsalary is %.2f",ennualsalary);
	return 0;
}
