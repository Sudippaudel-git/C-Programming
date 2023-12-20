/* Input two numbers from user */
   /* Input two numbers from user */
   #include<stdio.h>
  // #include<math.h>
   int main()
   {
   	int n1,n2,sub=0,rem1,rem2;
   	printf("Enter two number:-");
   	scanf("%d%d",&n1,&n2);
   	rem1=n1/10;
   	rem2=n2/10;
   	sub=rem1-rem2;
printf("\nThe subtraction of last two digit is =%d",sub);
    return 0;
}
