#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i; 
	int vowel = 0; 
	int consonant = 0;

    printf("Enter a string: ");
	gets(str);
    for (i = 0; str[i] != '\0'; i++) 
	{
        char ch = str[i];

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
			{
                vowel++;  
            }
            else
            {
            	consonant++;
			}
    }

    
    printf("\n Total number of vowels: %d", vowel);
    printf("\n Total number of consonants: %d", consonant);

    return 0;
}
