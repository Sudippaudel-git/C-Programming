#include<stdio.h>
int main(){
	int i,j,sum=0,n;
	printf("Enter number:");
	scanf("%d",&n);
	j=2;
	for(i=0;i<n;i++){
		sum=sum+j;
		j=j+2;
	}
	printf("The sum of even number upto: %d is:: %d ",n,sum);
	return 0;
}
