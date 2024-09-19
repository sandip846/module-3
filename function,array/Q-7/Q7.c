#include <stdio.h>
#include <string.h>
int main ()
{
	char str1[100];
	int length=0;
	printf("\n enter the string = ");
	gets(str1);
	
  while (str1[length] != '\0') {
        length++;
    }
	if (str1[length - 1] == '\n') {
        length--;
    }
	 printf("The length of the string is: %d\n", length);
	
	return 0;
}
