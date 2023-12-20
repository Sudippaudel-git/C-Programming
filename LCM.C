#include<stdio.h>
int main()
{
	int num1,num2,LCM,fact=1;
	printf("enter 2 numbers\n");
	scanf("%d%d",&num1,&num2);
	LCM=(num1>num2)?num1:num2;
	while(fact)
	{
		if(LCM%num1==0&&LCM%num2==0)
		{
			printf("LCM of %d and %d is %d\n",num1,num2,LCM);
			fact=0;
		}
	}
	return 0;
}
