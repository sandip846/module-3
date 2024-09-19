#include <stdio.h>
int main()
{
	char ch;
	printf("\n enter the character= ");
	scanf(" %c", &ch);
	
	if('A'<=ch && ch<='Z')
	{
		printf("\n the character is upper case");
	}
	else if('a'<=ch && ch<='z')
	{
		printf("\n the character is lower case");
	}
	else if('0'<=ch && ch<='9')
	{
	  printf("\n this is a digit");
	}
	else
	{
		printf("\n this is a spacial character");
	}
	
	return 0;
}
