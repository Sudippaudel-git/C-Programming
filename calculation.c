#include<stdio.h>
int main()     ///a+b*a+10/2*a
{
	int a,b,c;
	printf("\nEnter value of a and b:");
	scanf("%d%d",&a,&b);
	c=a+b*a+10/2*a;
	printf("\nThe value of c is =%d",c);
	return 0;
}
