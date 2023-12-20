
#include<stdio.h>
#include<math.h>
int main()
{
int s1,s2,angle;
float area;
printf("\nEnter the side1:");
scanf("%d",&s1);
printf("\nEnter side2:");
scanf("%d",&s2);
printf("\nEnter included angle:");
scanf("%d",&angle);
area=(s1*s2*sin((M_PI/100)*angle))/2;
printf("\nArea of scalene trangle is :%f",area);
return 0;
}
