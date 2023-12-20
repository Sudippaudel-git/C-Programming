#include<stdio.h>
int main()
{
	int count,n;
	float x,y;
	
	printf("\nenter the values of x and n:");
	scanf("%f%d",&x,&n);
	y=1.0;
	count =1;
	while(count<=n)
	{
		y=y*x;
		printf("\nthe value of y is =%d",y);
		count++;
	}
	printf("the ans is %d",y);
	return 0;
}
