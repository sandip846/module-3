#include <stdio.h>
int main()
{
	char ch;
	
	printf("\n enter the character = ");
	scanf(" %c",&ch);
	
	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        {
        	printf("\n this is a vowel");
        	
		}
		else
		{
				printf("\n this is not vowel");
		}
		return 0;
}
