#include <stdio.h>

int revnum( int num);
int Palindrome(int num);
int main ()
{
	int num;
	printf("\n enter the number = ");
	scanf("%d",&num);
	
	 if (Palindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
	
	return 0;
}
int revnum(int num)
{
	int reverse=0 ;
	int rem;
    while (num > 0) 
	{
        rem=num%10;
        reverse = (reverse*10)+rem;
        num = num / 10;
    }
    return reverse;
	
}
int Palindrome(int num)
{
	int numm;
  numm = num == revnum(num);

    return numm;

}
