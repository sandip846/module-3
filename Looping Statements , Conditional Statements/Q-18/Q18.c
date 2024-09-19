#include <stdio.h>

int main() {
    int N,i;
    
 
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &N);
    
 
    for (i = 1; i <= 10; i++) {
        printf("\n %d * %d = %d", N, i, N * i);
    }
    
    return 0;
}

