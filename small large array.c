//Program to find the smallest and largest elements in the array:
#include<stdio.h>
int main()
{
	int i,n;
	int small,large,a[50];
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the %d the element of an array:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nThe n th elements of an array is :");
	for(i=0;i<n;i++);
	{
		printf("\%d\t",a[i]);
		small=a[0];
		large=a[0];
		for(i=1;i<n;i++)
		{
			if(small>a[i])
			small=a[i];
			if(large<a[i])
			large=a[i];
		}
	}
	printf("\nThe smallest element=%d and largest element is =%d",small , large);
	return 0;
}
