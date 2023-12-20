#include<stdio.h>
int main()
{
	int fib1,fib2,prev,next,num;
	fib1=1;
	fib2=1;
	prev=fib1;
	printf("\nEnter number upto which you want Fibonacci sequence:\t");
	scanf("%d",num);
	printf("%d",fib1);
	do
	{
		next=fib2+prev;
		prev=fib2;
		fib2=next;
		printf(",%d",prev);}
		while(num>next);
	return 0;
}
