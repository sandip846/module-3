#include <stdio.h>

int main() 
{
    char str[100];  
    int alphabets = 0;
    int digits = 0;
    int specialChars = 0;
    int i;

    
    printf("Enter a string: ");
    gets(str);  


    for ( i = 0; str[i] != '\0'; i++) 
	{
       
        if (isalpha(str[i])) 
		{
            alphabets++;
        }
       
        else if (isdigit(str[i])) 
		{
            digits++;
        }
        
        else if (!isspace(str[i])) 
		{
            specialChars++;
        }
    }

    
    printf("\n Total alphabets: %d", alphabets);
    printf("\n Total digits: %d", digits);
    printf("\n Total special characters: %d", specialChars);

    return 0;
}

