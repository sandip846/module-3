#include <stdio.h>

int main() {
    int n, totalSum = 0,triangularNumber,i;

   
    printf("Enter a positive integer: ");
    scanf("%d", &n);

   
    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    
    for ( i = 1; i <= n; i++) {
     
        triangularNumber = (i * (i + 1)) /2;
       
        totalSum=totalSum + triangularNumber;
    }

  
    printf("Total sum of the series is %d\n", totalSum);

    return 0;
}

