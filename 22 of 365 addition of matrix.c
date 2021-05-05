#include <stdio.h>
#define n 10

void printmatrix(int matrix[n][n], int row, int column)
{
	for(int i=0;i<row;i++)
	{
		printf(" [");
		for(int j=0;j<column;j++)
		{
			printf("%4d",matrix[i][j]);
		}
			printf("  ]\n");
	}
}

int main()
{
	int a[n][n], b[n][n], row, column;
	printf("enter order of matrix: ");
	scanf("%d %d",&row, &column);
	
	printf("\nenter elements of matrix1:\n");
	for(int i=0;i<row;i++)
	{
		printf("enter %d elements of row%d: ",column, i+1);
		for(int j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nenter elements of matrix2:\n");
	for(int i=0;i<row;i++)
	{
		printf("enter %d elements of row%d: ",column, i+1);
		for(int j=0;j<column;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	int sum[n][n];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("\nmatrix1:\n");
	printmatrix(a, row, column);
	printf("\nmatrix2:\n");
	printmatrix(b, row, column);
	printf("\naddition:\n");
	printmatrix(sum, row, column);
	
	return 0;
}
