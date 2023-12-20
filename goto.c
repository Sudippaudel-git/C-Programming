#include<stdio.h>
int main()
{
	int x=1;
	loop1:
	printf("%d\t",x);
	x++;
	 if(x<10)
	goto loop1;
	return 0;
}
