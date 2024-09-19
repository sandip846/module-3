#include <stdio.h>
int main()
{
	float a,b,c,circumference;
	printf("\n the lenth of side a= ");
	scanf("%f",&a);
	printf("\n the lenth of side b= ");
	scanf("%f",&b);
	printf("\n the lenth of side c= ");
	scanf("%f",&c);
	circumference=a+b+c;
	
	printf("\n the circumference of tringle is=%.2f",circumference);
	return 0;
	
}
