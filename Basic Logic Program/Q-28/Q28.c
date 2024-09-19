#include <stdio.h>
#define DAYS_IN_YEAR 365
#define DAYS_IN_MONTH 30

int main()
{
int years;            
    int totalDays;       
    int months;          
    int remainingDays;
    
    
    printf("Enter the number of years: ");
    scanf("%d", &years);
    
     totalDays = years * DAYS_IN_YEAR;

    months = totalDays / DAYS_IN_MONTH;
    remainingDays = totalDays % DAYS_IN_MONTH;
    
     printf("%d years is approximately %d months and %d days.\n", years, months, remainingDays);
     return 0;


	
}
