#include <stdio.h>
int main ()
{
	int maths,phy,chem,totalmathsphy,totalmark;
	
	printf("\n enter the maths mark = ");
	scanf("%d",&maths);
	printf("\n enter the phy mark = ");
	scanf("%d",&phy);
	printf("\n enter the chem mark = ");
	scanf("%d",&chem);
	
	totalmark=maths+phy+chem;
	totalmathsphy=maths+phy;
	
	 if (maths >= 65 && phy >= 55 && chem >= 50 &&
        (totalmark >= 190 || totalmathsphy >= 140)) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }
    return 0;
	
}

   
