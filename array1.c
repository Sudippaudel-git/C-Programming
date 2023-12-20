#include <stdio.h>
#include<conio.h>
void main()
{
int i;
float arr[10];
printf("Enter the number you want: 10 numbers");
for(i=0;i<10;i++)
{
	scanf("%f",&arr[i]);
	
}
printf("\nThe entered number are :");
for(i=0;i<10;i++)
{
printf("\narr[%d]=%f",arr[i]);
}

return 0;
	}
