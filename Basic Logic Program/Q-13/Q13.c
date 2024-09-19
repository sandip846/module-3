#include <stdio.h>
int main()
{
	int ascii_value;
	char character;
	
	printf(" enter the ascii value(int)= ");
	
	scanf("%d",&ascii_value);
	
	character=ascii_value;
	
	printf("\n the character of ascii value %d and %c",ascii_value,character);
	return 0;
}
