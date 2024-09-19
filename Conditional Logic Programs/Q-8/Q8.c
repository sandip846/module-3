#include <stdio.h>
int main ()
{
	float height;
	printf("\n enter the height in centimeters= ");
	scanf("%f",&height);
	
	if(150>height)
	{
		printf("\n the size is short");
	}
	else if(150<=height  &&  180>=height)
	{
		printf("\n the size is average");
	}
	else
	{
		printf("\n the size is tall");
	}
	return 0;
}
