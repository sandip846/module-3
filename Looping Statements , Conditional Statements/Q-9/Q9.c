#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int digit;

   
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (number < 0) {
        number = -number;
    }

   
    while (number > 0) {
         digit = number % 10; 
        sum=sum + digit;          
        number=number / 10;          
    }

   
    printf("\n Sum of digits is: %d", -sum);

    return 0;
}

