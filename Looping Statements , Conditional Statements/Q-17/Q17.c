#include <stdio.h>

int main() {
    int count = 0;     
    int number;          
    int evenCount = 0; 
    int oddCount = 0;   

    
    printf("Enter 5 numbers:\n");

   
    while (count < 5) {
        printf("Number %d: ", count + 1);
        scanf("%d", &number);

      
        if (number % 2 == 0)
	    {
            evenCount++; 
        } else {
            oddCount++; 
        }

        count++; 
    }

   
    printf("\n Number of even numbers: %d", evenCount);
    printf("\n Number of odd numbers: %d", oddCount);

    return 0;
}

