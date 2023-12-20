#include<stdio.h>
int main()
{
	int x=4;
	x+=(x++)+(++x)+x;
	printf("\nthe result is %d",x);
	return 0;
}
