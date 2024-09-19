#include <stdio.h>
int main()
{
	int month,day;
	printf("\n enter of the month num(1-12) = ");
	scanf("%d",&month);
	
	
	switch(month)
	{
		case 1:
        case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		
		day=31;
		break;
		
		case 2:
		day=28;
		break;
		
		case 4:
		case 6:
		case 9:
		case 11:
		
		day=30;
		break;		
	
	 default:
            printf("\n Invalid month number! Please enter a number between 1 and 12");
            return 0;
            
	}
	printf("\n the month day is %d",day);
	return 0;
}
