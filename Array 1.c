#include<stdio.h>
#define M 2
#define N 3
int main()
{
	 int matrix[M][N],matrix1[M][N],sum[M][N],i,j;
	printf("\nEnter the elements of first matrix\t:");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		scanf("%d",&matrix[i][j]);
		
	}
	printf("\n the entered first matrix is :\n ");
	
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			
			printf("%d",&matrix[i][j]);
		}
		
		printf("\n");
		
		
	}
	printf("\nEnter the second matrix:\t");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("\n%d",&matrix1[i][j]);
		}
	}printf("\nthe second matrix is :\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d\t",matrix1[i][j]);
			
		}
		printf("\n");
		for(i=0;i<M;i++)
		{	for(j=0;j<N;j++)
		
		{
			sum[i][j]=matrix[i][j]+matrix1[i][j];
		}
			
		}
		printf("\nThe sum of matrix is:\n");
		for(i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				printf("\t%d",sum[i][j]);
			}
		
		
		}
	
	}printf("\n");
	
		return 0;
}

