#include <stdio.h>
int main()
{
	float area,side;
	printf("\n Enter the length of the side of the cube:");
	scanf("%f",&side);
	
	area=6*side*side;
	
	printf("\n The surface area of the cube is=%.2f",area);
	return 0;
}
