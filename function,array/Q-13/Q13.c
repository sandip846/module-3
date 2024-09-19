#include <stdio.h>
int main ()
{
	int arr[5],num,i;
     
	 printf("\n enter the 5 number = ");
	 
	 for(i=0;i<5;i++)
	 {
	 	printf("\n enter the num[%d]= ",i);
	 	scanf("%d",&arr[i]);
	 	
	 }	
	 
	 printf("\n total number = ");
	 for(i=0;i<5;i++)
	 {
	 	if(arr[i]%2==0)
	 	{
	 		printf("\n %d is a even num",arr[i]);
		 }
		 else
		 {
		 	printf("\n %d is a odd number",arr[i]);
		 }
	 }
	
	
	return 0;
}
