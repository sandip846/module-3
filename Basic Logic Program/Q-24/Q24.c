#include <stdio.h>
#define NUM_EMPLOYEES 5
int main()
{
	char name1[50],name2[50],name3[50],name4[50],name5[50];
	float salary1,salary2,salary3,salary4,salary5,totalsalary,averagesalary;
	
	
	printf("\n enter the name1= ");
	scanf(" %50s", &name1);
	printf("\n enter the salary= ");
	scanf("%f",&salary1);
	printf("\n enter the name2= ");
	scanf(" %50s", &name2);
	printf("\n enter the salary= ");
	scanf("%f",&salary2);
	printf("\n enter the name3= ");
	scanf(" %50s", &name3);
	printf("\n enter the salary= ");
	scanf("%f",&salary3);
	printf("\n enter the name4= ");
	scanf(" %50s", &name4);
	printf("\n enter the salary= ");
	scanf("%f",&salary4);
	printf("\n enter the name5= ");
	scanf(" %50s", &name5);
	printf("\n enter the salary= ");
	scanf("%f",&salary5);
	
	
	totalsalary=salary1+salary2+salary3+salary4+salary5;
	averagesalary=totalsalary/NUM_EMPLOYEES;
	
	
	printf("\n this is a total employyes salary %.2f",totalsalary);
	printf("\n this is a averagesalary %.2f",averagesalary);
	return 0;
	
	
	
	
	
}
