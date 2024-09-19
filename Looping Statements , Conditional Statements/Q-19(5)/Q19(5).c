#include <stdio.h>

int main() {
    char ch = 'A'; 
    int row,i,j;
    
    printf("\n enter the row number = ");
    scanf("%d",&row);
    
    
    for (i = 1; i <=row; i++) 
	{
     
        for (j = 1; j <= i; j++) 
		{
            
        printf("%c ", ch);
            
        ch++;
        }
        
        printf("\n");
    }

    return 0;
}
