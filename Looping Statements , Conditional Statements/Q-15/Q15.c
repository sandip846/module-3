#include <stdio.h>

int main() {
    int count = 0; 
    int number;    
    int sum = 0;   
  
    printf("Enter 10 numbers:\n");


    while (count < 10) {
        printf("Number %d: ", count + 1);
        scanf("%d", &number);
        sum= sum + number; 
        count++;       
    }

   
    printf("\n The sum of the 10 numbers is: %d", sum);

    return 0;
}

