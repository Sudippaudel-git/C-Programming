#include <stdio.h>
int  main()
{
   int m,n;
   printf("Input the number (Table to be calculated) : ");
   scanf("%d",&n);
   printf("\n");
   for(m=1;m<=10;m++)
   {
     printf("%d X %d = %d \n",n,m,n*m);
   }
return 0;
} 
