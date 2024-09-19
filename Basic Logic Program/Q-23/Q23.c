#include <stdio.h>
int main()
{
	int a=10,b=20;
	
	printf("\n value of before swaping=%d",a);
	printf("\n value of before swaping=%d",b);
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	
	printf("\n value after swaping=%d",a);
	printf("\n value after swaping=%d",b);
	
	return 0;
}
