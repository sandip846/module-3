#include<stdio.h>
void com(char st1[],char st2[]);

int main()
{
	char st1[100],st2[100];
	int legnth,i=0,j=0;
	printf(" Enter first string : ");
	gets(st1);
	printf("\n Enter sec string :");
	gets(st2);
	
	com(st1,st2);
	
	return 0;
}
void com(char st1[],char st2[])
{
	int i=0,j=0;
	char st3[100];
	for(i=0; st1[i] != '\0'; i++)
	{
		st3[j] = st1[i];
		j++;
	}
	for(i=0; st2[i] != '\0'; i++)
	{
		st3[j] = st2[i];
		j++;
	}
	st3[j] = '\0';
	printf("%s",st3);
}

