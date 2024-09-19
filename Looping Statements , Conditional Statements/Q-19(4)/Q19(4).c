#include <stdio.h>

int main() {
    int i, j,row;
    
    printf("\n enter the row number = ");
    scanf("%d",&row);
  
    for (i = 1; i <= row; i++)
	    {
       
        for (j = 1; j <= i; j++) 
		{
          
            printf("%c ", 'A' + j - 1);
        }
        
        printf("\n");
    }

    return 0;
}


