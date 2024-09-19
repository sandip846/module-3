#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    
    printf("Enter the first angle: ");
    scanf("%f", &angle1);

    printf("Enter the second angle: ");
    scanf("%f", &angle2);

    printf("Enter the third angle: ");
    scanf("%f", &angle3);

    
    if (angle1 <= 0) 
	{
        printf("\n Each angle must be greater than 0");
        return 0; 
    }
    if (angle2 <= 0) 
	{
        printf("\n Each angle must be greater than 0");
        return 0; 
    }
    if (angle3 <= 0) 
	{
        printf("\n Each angle must be greater than 0");
        return 0; 
    }

  
    if ((angle1 + angle2 + angle3) == 180) 
	{
        printf("\n The angles can form a triangle");
        return 0; 
    }

    printf("\n The angles do not sum up to 180 degrees");
    

    return 0;
}

