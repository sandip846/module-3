#include <stdio.h>
#include<string.h>
int main()
{
	char name[100],na[10][20];
	int i,j=0,k=0,m=0,n=0,max,min;
	printf("Enter the word :");
	gets(name);
	for(i=0; name[i] != '\0'; i++)
	{
		if(name[i] == ' ')
		{
			na[k][j]='\0';
			k++;
			j=0;
		}
		else{
			na[k][j]=name[i];
			j++;
		}
	}
	na[k][j] ='\0';
	
	max=strlen(na[0]);
    min=strlen(na[0]);
	
	for(i=0;i<=k;i++)
	{
		if (max<strlen(na[i]))
        {
            max=strlen(na[i]);
            m=i;
        }
	 if (min>strlen(na[i]))
        {
            min=strlen(na[i]);
            n=i;
        }
	}
	printf("Largest = %s \n smalles = %s",na[m],na[n]);
}
