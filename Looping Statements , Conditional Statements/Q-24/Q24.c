#include <stdio.h>

int main() {
    int n,i, sum = 0;

    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

   
    for (i = 1; i <= n; i++) {
        sum=sum+i;  
    }

    
    printf("Sum of integers from 1 to %d is %d\n", n, sum);

    return 0;
}

