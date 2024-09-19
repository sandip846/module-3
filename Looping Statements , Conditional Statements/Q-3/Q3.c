#include <stdio.h>
int main()
{
	int number[10];
	int i;
	int evencount=0,evensum=0,oddcount=0,oddsum=0;
	
	printf("\n enter the 10 number = ");
	for(i=0;i<10;i++)
	{
		printf("\n number %d= ",i+1);
		scanf("%d",&number[i]);
		
	}
	
	for(i=0;i<10;i++)
	{
		if(number[i]%2==0)
		{
		evencount++;
		evensum=evensum+number[i];
		}
		else
		{
			oddcount++;
			oddsum+=number[i];
		}
		
	}
	
	printf("\n Number of even numbers: %d", evencount);
    printf("\n Number of odd numbers: %d", oddcount);
    printf("\n Sum of even numbers: %d", evensum);
    printf("\n Sum of odd numbers: %d", oddsum);

return 0;
}
