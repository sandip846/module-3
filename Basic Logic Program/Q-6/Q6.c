#include <stdio.h>
int main()
{
	float base,height,area;
	printf("\n enter the height of tringle= ");
	scanf("%f",&base);
	printf("\n enter the base of tringle= ");
	scanf("%f",&height);
	
	area=0.5*base*height;
	
	printf("\n the area of tringle is=%.2f",area);
	return 0;
	
	
}
