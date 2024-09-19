#include <stdio.h>
int main()
{
	float width,lenth,hight,circumference;
	printf("\n Enter the width of the rectangular prism= ");
	scanf("%f",&width);
	printf("\n Enter the lenth of the rectangular prism= ");
	scanf("%f",&lenth);
	printf("\n Enter the hight of the rectangular prism= ");
	scanf("%f",&hight);
	
	circumference=2*(width*lenth+hight*lenth+hight*width);
	
	printf("\n The area of the rectangular prism is=%.2f",circumference);
	return 0; 
	
}
