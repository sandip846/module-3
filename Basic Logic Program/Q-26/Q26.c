#include <stdio.h>
int main()
{
	float celsius, fahrenheit,num;
	printf("\n enter the fahrenheit= ");
	scanf("%f",&fahrenheit);
	
	celsius=(5.0 / 9.0)*(fahrenheit - 32);
	
	printf("\n this is a celsius %.2f",celsius);
	return 0;
}
