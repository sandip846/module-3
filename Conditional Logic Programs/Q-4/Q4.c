#include <stdio.h>
int main ()
{   char choice;  
    int num1,num2 ;
	
	printf("\n press '+' to perform  eddition");
	printf("\n press '-' to perform  subtraction");
	printf("\n press '*' to perform  multiplication");
	printf("\n press '/' to perform division");
	printf("\n press 'rem' to perform  remainder");
	
	printf("\n enter the choice= ");
	 scanf(" %c", &choice);
	 
	 switch(choice)
	 {
	 	case'+':
	 		printf("\nenter the value of num1= ");
	 		scanf("%d", &num1);
	 		printf("\nenter the value of num2= ");
	 		scanf("%d", &num2);
	 		printf("\n the addition of %d and %d is %d",num1,num2,num1+num2 );
	 		break;
	 	case'-':
	 		printf("\nenter the value of num1= ");
	 		scanf("%d", &num1);
	 		printf("\nenter the value of num2= ");
	 		scanf("%d", &num2);
	 		printf("\n the addition of %d and %d is %d",num1,num2,num1-num2 );
	 		break;
	 	case'*':
	 		printf("\nenter the value of num1= ");
	 		scanf("%d", &num1);
	 		printf("\nenter the value of num2= ");
	 		scanf("%d", &num2);
	 		printf("\n the addition of %d and %d is %d",num1,num2,num1*num2 );
	 		break;
	 	case'/':
	 		printf("\nenter the value of num1= ");
	 		scanf("%d", &num1);
	 		printf("\nenter the value of num2= ");
	 		scanf("%d", &num2);
	 		printf("\n the addition of %d and %d is %d",num1,num2,num1/num2 );
	 		break;
	 	case'r':
	 		printf("\nenter the value of num1= ");
	 		scanf("%d", &num1);
	 		printf("\nenter the value of num2= ");
	 		scanf("%d", &num2);
	 		printf("\n the addition of %d and %d is %d",num1,num2,num1%num2 );
	 		break;
	 		default:printf("\ninvalid input");
	 		
	 }
	return 0;
}
