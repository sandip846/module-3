#include <stdio.h>
int main()
{
	double principal,rate,time,amount,compoundinterest;
	
	printf("\n enter the principal amount= ");
	scanf("%lf", &principal);
	
	printf("\n enter the premiumrate (%)= ");
	scanf("%lf", &rate);
	
	printf("\n enter the time of year= ");
	scanf("%lf",&time);
	
	
	amount= principal*(1+rate/100)*time;
	
	compoundinterest = amount-principal;
	
	printf("\n after 1 year amount %.2lf",amount);
	printf("\n compoundinterest is %.2lf",compoundinterest);
	
	
	return 0;
}
