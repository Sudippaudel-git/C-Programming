#include<stdio.h>
int main()
{
	int num,digit,sum=0;
	int temp;
	printf("\nEnter number to be checked:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		digit=num%10;
		sum=sum+digit*digit*digit;
		num/=10;
		
	}
	if(temp==sum)
	{
			printf("\nArmstrong number!!!");
	}

	else
	{
			printf("\nNot Armstrong number!!!");
	}

	return 0;
	
	
}
