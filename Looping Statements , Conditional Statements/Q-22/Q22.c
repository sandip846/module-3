#include<stdio.h>
int main()
{
	int i=1,num,rem,rev,copy;
	while(i<=3)
	{
		printf("\n enter the number: ");
		scanf("%d",&num);
	
        copy=num; 
        rev=0;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}

	if(copy==rev)
	{
		printf(" %d number is palindrom \n ",copy);
	}
	else
	{
		printf(" %d number is not palindrom \n",copy);
	}
	i++;
    }
	  
    return 0;
}
