#include <stdio.h>
int main()
{
	
	double salary,premiumrate=0.05,insurancepremium;
	
	printf("\n enter the salary= ");
	scanf("%lf",&salary);
	
	insurancepremium = salary*premiumrate;
	
	printf("\n the insurancepremium based on salary of %.2f is %.2f",salary,insurancepremium);
	return 0;
	
}
   

