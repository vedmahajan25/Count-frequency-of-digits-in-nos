#include<stdio.h>
int main()
{
	int n, digit, rem, count=0;
	printf("Enter the Number : ");
	scanf("%d",&n);
	printf("\nEnter the Digit : ");
	scanf("%d",&digit);
	
	while (n>0)
	{
		rem  = n%10;
		n = n/10;
		if(rem == digit)
			count = count+1;
	}
	printf("\n >>>The digit %d occurs %d times.",digit,count);
}
