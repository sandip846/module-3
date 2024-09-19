#include <stdio.h>

int main() 
{
    int start,end,i; 
      
    printf("\n enter the start number = ");
    scanf("%d",&start);
    printf("\n enter the end number = ");
    scanf("%d",&end);
   
    for ( i = start; i <= end; i++) {
      
        printf("%d  ", i);
    }
    
    
    printf("\n");

    return 0;
}

