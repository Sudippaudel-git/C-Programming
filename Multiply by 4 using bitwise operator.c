#include<stdio.h>
int main()
{

long num,tempnum;
printf("Enter a number;");
scanf("%ld",&num);
tempnum=num;
//printf("%ld",tempnum);
num=num<<2;
//printf("the num is =%ld",num);
printf("%ld*4=%ld\n",tempnum,num);

return 0;


}

