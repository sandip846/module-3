#include <stdio.h>
int main()
{
	int num1,num2,num3,min;
	printf("\n enter the num1 = ");
	scanf("%d",&num1);
	printf("\n enter the num2 = ");
	scanf("%d",&num2);
	printf("\n enter the num3 = ");
	scanf("%d",&num3);
	
	min=(num1<num2)?((num1<num3)?num1:num3):((num2<num3))?num2:num3;
	
	printf("\n the min num is %d",min);
	return 0;
}
