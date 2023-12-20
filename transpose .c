#include<stdio.h>
#define M 3
#define N 3
int main()
{
	int matrix[M][N],transpose[N][M],i,j;
	printf("\nEnter the elements of matrix:\t");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&matrix[i][j]);
			
		}
	}
	
	printf("\nThe elements of matrix to be traspose is");
	
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d\t",&matrix[i][j]);
		}
	}printf("\n");//finding traspose matrix
	
	
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
		transpose	[j][i]=matrix[i][j];
		}
	}
	printf("\nThe transpose matrix is:");
	
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\n%d\t",transpose[i][j]);
		}
	}printf("\n");
	
	return 0;
}

