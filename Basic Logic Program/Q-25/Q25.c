#include <stdio.h>
#define num_of_expences 5
int main()
{
	float num1,num2,num3,num4,num5,totalexpences,averageexpences;
	
	printf("\n enter the expenses= ");
	scanf("%f",&num1);
	printf("\n enter the expenses= ");
	scanf("%f",&num2);
	printf("\n enter the expenses= ");
	scanf("%f",&num3);
	printf("\n enter the expenses= ");
	scanf("%f",&num4);
	printf("\n enter the expenses= ");
	scanf("%f",&num5);
	
	totalexpences=num1+num2+num3+num4+num5;
	averageexpences=totalexpences/num_of_expences;
	printf("\n total average expences %.2f",averageexpences);
	return 0;
	
	
}
