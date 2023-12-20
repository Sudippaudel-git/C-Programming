#include<stdio.h>
int main()
{
	long int num,rev=0;
	int digit;
	printf("enter the number in your choice:");
	scanf("%ld",&num);
	while(num!=0)
	{
		digit=num%10;
		printf("\nthe digit is %ld",digit);
		rev=rev*10+digit;
		printf("\nthe rev %ld",rev);
		num=num/10;
	}
	printf("\nthe reverse number is =%ld",rev);
	return 0;
}
