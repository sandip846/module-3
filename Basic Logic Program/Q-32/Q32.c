# include <stdio.h>
int main()
{
	
	int a,b,sum;
	printf("\n enter the first value= ");
	scanf("%d",&a);
	printf("\n enter the second value= ");
	scanf("%d",&b);
	
	
	sum=a+b;
	
	printf("\n sum value is %d",sum);
	
	printf("\n the number of the size %d byte",sizeof(sum));
	return 0;
}
