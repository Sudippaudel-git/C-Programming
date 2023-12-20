#include<stdio.h>
int main()
{

int i=-1,j=-1,k=0,l=2,m;

m=i++&&j++&&k++||l++;

printf("\n%d\t %d\t %d\t %d\t %d\t",i,j,k,l,m);

return 0;


}

