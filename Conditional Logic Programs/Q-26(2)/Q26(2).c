#include <stdio.h>

int main() {
    char ch;

  
    printf("Enter a  alphabetic character: ");
    scanf(" %c", &ch); 

    
    if (ch >= 'A' && ch <= 'Z') 
	{
        ch = ch + 32; 
    }

   
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("%c is not an alphabetic character.\n", ch);
            }
            break;
    }

    return 0;
}

