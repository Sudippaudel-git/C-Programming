#include<stdio.h>
int main()
{
	int a,b,c;
	float d;
	printf("enter the two whole number:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\nThe sum=%d",c);
	c=a-b;
	printf("\nDifference=%d",c);
	c=a*b;
	printf("\nMultiplication=%d",c);
	d=a/b;
	printf("\nDivision=%f",d);
	return 0;
}
