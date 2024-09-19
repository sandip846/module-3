#include <stdio.h>
int main()
{
	int numofstudent,appleperstudent=5,totalapple;
	
	printf("\n enter the student= ");
	scanf("%d",&numofstudent);
	
	totalapple=numofstudent*appleperstudent;
	
	printf("\n total apple required=%d",totalapple);
	return 0;
}
