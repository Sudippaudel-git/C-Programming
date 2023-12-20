#include<stdio.h>
#define M 2
#define N 4

void main()
{
	int matrix [M][N],i,j;
	printf(" \nEnter the matrix elements:\t");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&matrix[i][j]);
			
		}
	}
	printf("\nThe entered matrix is :\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		printf("%d\t",matrix[i][j]);
		
	}
	printf("\n");
	return 0;
}
