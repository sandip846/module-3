#include <stdio.h>

int main() {
    int number;
    int maxDigit = 0;
    int digit;
    
  
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (number < 0) {
        number = -number;
    }

   
    while (number > 0) {
         digit = number % 10; 
        if (digit > maxDigit) {
            maxDigit = digit; 
        }
        number= number/10; 
    }

 
    printf("\n Max digit is: %d", maxDigit);

    return 0;
}

