#include <stdio.h>

int main()
{
    int n, i;
    double current = 1.0; 
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("\nSeries:%.0f",current);
    
    for (i=1;i<n;i++)
    {
        if (i%2!=0)
        {
            current=current*2; 
        }
        else
        {
            current=current*1.5; 
        }
        printf("\t %.0f",current);
    }
    
    printf("\n");
    return 0;
}

