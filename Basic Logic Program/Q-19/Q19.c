#include <stdio.h>
int main()
{
float a,p,r,t,n,power,ans;
printf("\n the value of principal = ");
scanf("%f",&p);
printf("\n the value of rate = ");
scanf("%f",&r);
printf("\n the number of year = ");
scanf("%f",&t);
printf("\n the number of times interest is compound per year = ");
scanf("%f",&n);
a=p*(1+(r/n));
power=(n*t);
ans=pow(a,power);
printf("\n  compound interest = %.2f",ans);
return 0;
	
}
