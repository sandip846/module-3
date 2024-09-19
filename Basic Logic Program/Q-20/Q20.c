#include <stdio.h>
int main()
{
	double monthlySalary,insurancePremium,loanInstallment,remainingSalary;
	
	 printf("Enter your monthly salary: ");
	 scanf("%lf", &monthlySalary);
	 
	  insurancePremium = monthlySalary * 0.10;
	  
	  loanInstallment = monthlySalary * 0.10;
	
	 remainingSalary = monthlySalary - (insurancePremium + loanInstallment);
	 
	printf("\nMonthly Salary: %.2f", monthlySalary);
    printf("\nInsurance Premium (10%%): %.2f", insurancePremium);
    printf("\nLoan Installment (10%%): %.2f", loanInstallment);
    printf("\nRemaining Salary: %.2f", remainingSalary);
    return 0;

	 
	 
	
	
	
}
