#include <stdio.h>

int main() 
{
    int i, n, sum = 0;
    printf("Enter n value: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum =sum+ (i * i);
    }

    printf("\n Sum of squares of first %d natural numbers = %d", n, sum);
    return 0;
}
