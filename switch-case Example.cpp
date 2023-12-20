#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define PI 3.1415
int main()
{
	int choice,n,N,i;
	float r,a,num,sum;
	printf("1.Find area of circle\n");
	printf("2.Check the given numbers is odd or even:");
	printf("3.Find the sum of N numbers\n");
	printf("4.Exit\n");
	while (TRUE)
	{
		printf("ENter your choice:");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1.
				//rintf("Enter radius:");
			scanf("%f",&r);
			a=PI*r*r;
			printf("Area of circle =%f\n",a);
			break;
			case 2.
			printf("Enter number:");
			scanf("%d",&n);
			if(n%2==0)
			printf("%d is even:");
			else
			printf("%d is odd:");
			break;
			case 3.
			sum=0;
			printf("Enter value of N:");
			scanf("%d",&n);
			printf("Enter %d numbers\n",N);
			for(i=0;i<N;i++)
			{
				scanf("%f",&num);
				sum=sum+num;
				
			}
			printf("Sum=%f\n",sum);
			break;
			case 4.
			exit(0);
			default:
				printf("Wrong choice:!!!!");
			
		}
	}
	return 0;
}
