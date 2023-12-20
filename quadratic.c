#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,root1,root2,real,imag;
	printf("\nEnter values of a,b,c of quadratic eqn:");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
	{
		printf("\nImaginary roots:");
		d=sqrt(fabs(d));
		real=-b/(2*a);
		imag=d/(2*a);
		printf("\nRoot1=%.2f+i%.2f",real,imag);
		printf("\nRoot2=%.2f-i%.2f",real,imag);
	}
	else
	{
		printf("\nRoots are real:");
		d=sqrt(d);
		root1=(-b+d)/(2*a);
		root2=(-b-d)/(2*a);
		printf("\nRoot1=%.2f\t Root2=%.2f",root1,root2);
		return 0;
	}
}
