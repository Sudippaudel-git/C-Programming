//program that reads the marks of 5 subject and find the sum and average:
#include<stdio.h>
#include<conio.h>
int main()
{
	int i ,sum;
	int marks[5];//declaration of array of 5 elements marks
	float average;
	sum=0;
	for(i=0;i<5;i++)
	{
		 printf("Enter the marks of subjects%d:",i+1);
		 scanf("\n%d",&marks[i]);
		 
	}
	for(i=0;i<=5;i++);
	{
		sum=sum+marks[i];
		
	}
average=sum/5;
printf("Average=%.2f",average);
return 0;
}
