#include <stdio.h>
int main()
{
	float circumference,lenth,width;
	
	printf("\n enter the lenth of rectangle= ");
	scanf("%f",&lenth);
	printf("\n enter the width of rectangle= ");
	scanf("%f",&width);
	
	
	circumference=2*(lenth+width);
	
	printf("\n the  perimeter of the rectangle is=%.2f",circumference);
	return 0;
	
}
