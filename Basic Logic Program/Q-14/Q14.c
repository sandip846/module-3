#include <stdio.h>
int main()
{
	int ascii_value;
	char character;
	
	printf("\n enter  a character= ");
	scanf("%c",&character);
	
	ascii_value=character;
	
	printf("\n The ascii_value of '%c' is: %d", character, ascii_value);
	return 0;
}
