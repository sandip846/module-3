#include <stdio.h>

int main() {
    int number,temp;
    int firstDigit, lastDigit, sum;


    printf("Enter a number: ");
    scanf("%d", &number);


    if (number < 0) {
        number = -number;
    }

 
    lastDigit = number % 10;

  
     temp = number;
    while (temp >= 10) 
    {
    temp=temp / 10; 
    }
    firstDigit = temp;

    
    sum = firstDigit + lastDigit;

    
    printf("\n Sum of the first and last digit is: %d", -sum);

    return 0;
}

