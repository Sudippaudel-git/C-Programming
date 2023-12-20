#include<stdio.h>
int main()
{
	long num,n,digit1,digit2,digit3,digit4,digit5;
	printf("\nEnter a six digit number:");
	scanf("%d",&num);
	n=num;
	digit1=n%10;
	n=n/10;
	digit2=n%10;
	n=n/10;
	digit3=n%10;
	n=n/10;
	digit4=n%10;
	n=n/10;
	digit5=n%10;
	n=n/10;
	printf("\nThe reverse =%ld%ld%ld%ld%ld%ld",digit1,digit2,digit3,digit4,digit5,n);
	return 0;
}
