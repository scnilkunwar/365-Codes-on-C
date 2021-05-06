#include <stdio.h>
#define n 10

void printmatrix(char topic[20], int matrix[n][n], int row, int column)
{
	printf("\n%s\n",topic);
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

void matrixmult(int matrix1[n][n], int matrix2[n][n], int matrix3[n][n], int row1, int rowcolumn, int column2)
{
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<column2;j++)
		{
			for(int k=0;k<rowcolumn;k++)
			{
				matrix3[i][j] += matrix1[i][k]*matrix2[k][j];
			}
		}
	}
}

void takematrix(int matrix[n][n], int row, int column)
{
	static int count = 1;
	printf("\nenter elements of matrix%d:\n",count++);
	for(int i=0;i<row;i++)
	{
		printf("enter %d elements of %d row: ",column, i+1);
		for(int j=0;j<column;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
}

int main()
{
	int matrix1[n][n], matrix2[n][n], matrix3[n][n] = {};
	int row1, column1, row2, column2;
	
	printf("enter order of matrix1: ");
	scanf("%d %d",&row1, &column1);
	
	printf("enter order of matrix2: ");
	scanf("%d %d",&row2, &column2);
	
	if(column1 != row2)
	{
		printf("matrix multiplication is not possible!!!");
		exit(0);
	}
	
	else
	{
		takematrix(matrix1, row1, column1);
		takematrix(matrix2, row2, column2);
		matrixmult(matrix1, matrix2, matrix3, row1, row2, column2);
		printmatrix("matrix1:", matrix1, row1, column1);
		printmatrix("matrix2:", matrix2, row2, column2);
		printmatrix("multiplication:", matrix3, row1, column2);
	}
	
	return 0;
}
