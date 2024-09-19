#include <stdio.h>
int main ()
{
    float mark,passingmark=50;
	printf("\n enter your mark = ");
	scanf("%f",&mark);
	
	if(passingmark<=mark)
	{
		printf("\n congratution passing in exam");
	}
	else
	{
		printf("\n fail in exam");
	}
	return 0;
}
