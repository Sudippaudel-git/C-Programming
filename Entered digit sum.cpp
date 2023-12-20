#include<stdio.h>
int main()
{
int n, sum=0,rem;
printf("enter the number:");
scanf("%d",&n);
while(n>0)
{
	rem=n%10;
	printf("\nthe rem is %d",rem);
	sum+=rem;
	printf("\nthe sum is %d",sum);
	n=n/10;
	printf("\nthe n is =%d",n);
}
printf("\nsum of digit is= %d ",sum);
return 0;
}
