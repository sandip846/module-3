#include <stdio.h>

int main() 
  {
  
    int n,power1, power2, power3; 

    
    printf("Enter an integer: ");
    scanf("%d", &n);

   
    power1 = n;        
    power2 = n * n;    
    power3 = n * n * n; 

   
    printf("The first three powers of %d are:\n", n);
    printf("%d^1 = %d\n", n, power1);
    printf("%d^2 = %d\n", n, power2);
    printf("%d^3 = %d\n", n, power3);

    return 0;
}

