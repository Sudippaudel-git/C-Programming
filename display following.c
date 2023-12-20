#include<stdio.h>
int main()
{
	int i,j,p;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			p=(i+j)+1;
			printf("%d\t",p);
		}
		printf("\n");
		
	}
	return 0;
}
