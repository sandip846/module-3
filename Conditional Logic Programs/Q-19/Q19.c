#include <stdio.h>

int main() 
{
   
    int customerID;
    char customerName[50];
    float unitsConsumed, billAmount, surcharge, totalAmount;

   
    printf("\n Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("\n Enter Customer Name: ");
    scanf(" %50s", &customerName);  

    printf(" \n Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);

   
    if (unitsConsumed <= 350) {
        billAmount = unitsConsumed * 1.20;
    } else if (unitsConsumed > 350 && unitsConsumed < 600) {
        billAmount = unitsConsumed * 1.50;
    } else if (unitsConsumed >= 600 && unitsConsumed < 800) {
        billAmount = unitsConsumed * 1.80;
    } else {
        billAmount = unitsConsumed * 2.00;
    }

  
    if (billAmount > 800) {
        surcharge = billAmount * 0.18;
        totalAmount = billAmount + surcharge;
    } else {
        totalAmount = billAmount;
    }

  
    if (totalAmount < 256) {
        totalAmount = 256;
    }


    printf("\nElectricity Bill Details:\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Bill Amount: Rs. %.2f\n", billAmount);
    printf("Surcharge: Rs. %.2f\n", surcharge );
    printf("Total Amount to be Paid: Rs. %.2f\n", totalAmount);

    return 0;
}

