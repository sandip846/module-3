#include<stdio.h>
void findSubstring(int index,int length,char str[])
{
	char substring[200]; 
	int i=0;
	while(i<length)
	{
		substring[i] = str[index+i];
		i++;	
	}
	printf("\n substring = %s",substring);
}
 int main()
{
	char name[20];
	int index, length;
	printf("\n Enter a string : ");
	gets(name);
	
	printf("\n name = %s",name);

	printf("\n Enter index position which you want : ");
	scanf("%d",&index);

	printf("\n Enter length of sub string : ");
	scanf("%d",&length);

	findSubstring(index,length,name);
	return 0;
}
