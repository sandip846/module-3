#include <stdio.h>
int main()
{
	int number[5];
	int i;
	printf("\n enter the 5 number = ");
	for(i=0;i<5;i++)
	{
		printf("\n number %d= ",i+1);
		scanf("%d",&number[i]);
	}
	printf("The numbers you entered are:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("\n number %d: %d", i + 1, number[i]);
    }

	return 0;
}
