#include<stdio.h>
int main()
{
	int n1,n2,sum=0,rem1,rem2;
	printf("Enter two number:\n");
	scanf("%d%d",&n1,&n2);
	rem1=n1%10;
	rem2=n2%10;
	sum=rem1+rem2;
	printf("\nThe sum of last two digit is %d",sum);
	return 0;
}
