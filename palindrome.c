#include<stdio.h>
int main()
{
	int num,rev=0,digit,temp;
	printf("\nEnter number to be checked:\t");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		rev=rev*10+digit;
		num=num/10;
	}
	if(temp==rev)
	{
		printf("\nThe number is palindrome!!!!!");
	}
	else
	{
		printf("\nThe number is not palindrome!!!!");
		
	}
	return 0;
}
