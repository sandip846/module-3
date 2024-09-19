#include<stdio.h>
#include <string.h>
int main()
{
	char str[100];
	printf("Enter string : ");
	gets(str);
	 
	strupr(str);
	
	int count=0,a;
	for(a=0; str[a]!='\0'; a++)
	{
			if(str[a] == 'I' && str[a+1] == 'S' && str[a-1] == ' ' && str[a+2] == ' ' )
			{
				count++;
			}
	}
	printf("\n %d",count);
}
