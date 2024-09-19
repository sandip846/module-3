#include <stdio.h>
int main()
{
	float area, width,lenth;
	
	printf("\n enter the width of Rectangle= ");
	scanf("%f",&width);
	printf("\n enter the lenth of Rectangle= ");
	scanf("%f",&lenth);
	
	area=width*lenth;
	
	printf("\n the area of Rectangle=%.2f",area);
	return 0;
}
