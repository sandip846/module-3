#include<stdio.h>

int add1(int num1, int num2);
int sub1(int num1, int num2);
int mul1(int num1, int num2);
float div1(int num1, int num2);
int rem1(int num1, int num2);

int main()
{
	int num1,num2,ans,choice;
	float result;
            printf("\n1.Addition");
			printf("\n2.Subtraction");
			printf("\n3.Multiplication");
			printf("\n4.Division");
			printf("\n5.Remainder");
			printf("\nEnter your choice = ");
			scanf("%d",&choice);	
					
			switch(choice)
			{
				case 1:
					printf("\nenter the value of num1= ");
	 		        scanf("%d", &num1);
	 	        	printf("\nenter the value of num2= ");
	 		        scanf("%d", &num2);
					ans = add1(num1,num2);
					printf("\nThe addition of %d and %d is %d",num1,num2,ans);
				break;
				case 2:
					printf("\nenter the value of num1= ");
	 		        scanf("%d", &num1);
	 	        	printf("\nenter the value of num2= ");
	 	        	scanf("%d", &num2);
					ans = sub1(num1,num2);
					printf("\nThe subtraction of %d and %d is %d",num1,num2,ans);
				break;
				case 3:
					printf("\nenter the value of num1= ");
	 		        scanf("%d", &num1);
	 	        	printf("\nenter the value of num2= ");
	 	        	scanf("%d", &num2);
					ans = mul1(num1,num2);
					printf("\nThe multiplication of %d and %d is %d",num1,num2,ans);
				break;
				case 4:
					printf("\nenter the value of num1= ");
	 	        	scanf("%d", &num1);
	 	        	printf("\nenter the value of num2= ");
	 		        scanf("%d", &num2);
					result = div1(num1,num2);
					printf("\nThe division of %d and %d is %.2f",num1,num2,result);
				break;
				case 5:
					printf("\nenter the value of num1= ");
	 		        scanf("%d", &num1);
	 		        printf("\nenter the value of num2= ");
	 		        scanf("%d", &num2);
					ans = rem1(num1,num2);
					printf("\nThe remainder of %d and %d is %d",num1,num2,ans);
				break;
				default : printf("\nInvalid input");
			}

    return 0;
}

int add1(int num1, int num2)
{
	int ans;
	ans = num1 + num2;
	return ans;
}
int sub1(int num1, int num2)
{
	int ans;
	ans = num1 - num2;
	return ans;
}
int mul1(int num1, int num2)
{
	int ans;
	ans = num1 * num2;
	return ans;
}
float div1(int num1, int num2)
{
	float result;
	result = (float)num1 / (float)num2;
	return result;
}
int rem1(int num1, int num2)
{
	int ans;
	ans = num1 % num2;
	return ans;
}


