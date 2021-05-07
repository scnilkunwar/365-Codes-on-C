#include <stdio.h>
#define n 10

void printmatrix(char topic[20], int matrix[n][n], int row, int column)
{
	
}

int main()
{
	int row, column, matrix[n][n];
	
	printf("enter order of matrix: ");
	scanf("%d %d",&row, &column);
	
	for(int i=0;i<row;i++)
	{
		printf("enter %d elements of row%d: ",column, i+1);
		for(int j=0;j<column;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("\nmatrix\n");
	for(int i=0;i<row;i++)
	{
		printf(" [");
		for(int j=0;j<column;j++)
		{
			printf("%4d",matrix[i][j]);
		}
			printf("  ]\n");
	}
	
	printf("\ntransformation\n");
	for(int i=0;i<column;i++)
	{
		printf(" [");
		for(int j=0;j<row;j++)
		{
			printf("%4d",matrix[j][i]);
		}
			printf("  ]\n");
	}
	return 0;
}
