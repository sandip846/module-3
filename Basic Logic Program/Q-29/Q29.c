#include <stdio.h>
#define onehourminit 60
int main()
{
	int minit,second;
	float hour;
	printf("\n enter the minit= ");
	scanf("%d",&minit);
	
	
	hour=minit/onehourminit;
	second=minit%onehourminit;
	
	printf("\n %d minit is %.2f hour and %d minit ",minit,hour,second);
	return 0;
	
	
	
	
}
