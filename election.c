#include<stdio.h>
#include<math.h>
int main()
{
	int v=55,i=20,n=7500,s,p,c,r;
	
	s=(80/100)*n;
	printf("\nThe valid votes is:%d",s);
	p=(55/100)*s;
	printf("\nValid votes for 1 candidates is:%d",p);
	r=s-p;
	printf("\nthe valid votes for another candidate is :%d",r);
	return 0;
	
}
