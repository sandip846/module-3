#include <stdio.h>
int main()
{
	int cost,sell,profitlose;
	
	printf("\n enter the costing value = ");
	scanf("%d",&cost);
	printf("\n enter the selling value = ");
	scanf("%d",&sell);
	
	
	profitlose = sell-cost;
	
	if (cost<sell)
	{
		printf("\n %d is the profit",profitlose);
	}
	else if (cost>sell)
	{
		printf("\n %d is the lose",profitlose);
	}
	else
	{
		printf("\n no profit, no lose");
	}

	return 0;
	
	
}
