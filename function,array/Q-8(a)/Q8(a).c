#include<stdio.h>
struct Student
{
	int num;
	char name[100];
	char address[100];
	int age;
};
int main()
{
	struct Student s[100];
	int i;
	for(i=0;i<1;i++)
	{
		printf("\nEnter the Mo no. = ");
		scanf("%d",&s[i].num);
		printf("\nEnter the name = ");
		scanf(" %s",&s[i].name);
		printf("\nEnter the adress = ");
		scanf(" %s",&s[i].address);
		printf("\nEnter the age = ");
		scanf(" %d",&s[i].age);
	}
	
	for(i=0;i<1;i++)
	{
		printf("\n emp Mo no =%d",s[i].num);
		printf("\n emp name =%s",s[i].name);
		printf("\n emp address =%s",s[i].address);
		printf("\n emp age =%d",s[i].age);
		printf("\n");
	}
	
	return 0;
}
