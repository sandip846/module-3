#include<stdio.h>
#include<string.h>
int main()
{
	char counname[100],abr[100];
	int i,j=0;
	printf("\nEnter the country name = ");
	gets(counname);
	
	printf("\nOriginal school name = %s",counname);
	
	for(i=0;counname[i]!='\0';i++)
	{
		if((i==0 || counname[i-1]==' ') && counname[i]!=' ')
		{
			abr[j] = counname[i];
			j++;
		}
	}
	strupr(abr);
	printf("\nAbbriviated form = ");
	for(i=0;i<j;i++)
	{
		printf("%c",abr[i]);
	}
	return 0;
}
