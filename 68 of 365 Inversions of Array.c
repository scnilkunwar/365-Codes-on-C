
//	Day 68 of 365
//	Inversion of Array

#include <stdio.h>

int inversionArray(int arr[], int len)
{
	int count = 0;
	for(int i=0;i<len-1;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(arr[i] > arr[j])
				count++;
		}
	}
	return count;
}

int main()
{
	int testCase[5][5] = {{89, 61, 17, 41, 11},
			      {59, 13, 17, 2, 41},
			      {79, 47, 2, 29, 3},
			      {41, 61, 67, 37, 47},
			      {19, 31, 73, 59, 79}};
						  
	for(int i=0;i<5;i++)
	{
		printf("\nTest Case 0%d:\n",i+1);
		printf("Array: [");
		for(int j=0;j<5;j++)
			printf("%d ",testCase[i][j]);
		printf("\b]\nNo. of Inversion: ");
		printf("%d\n",inversionArray(testCase[i], 5));
	}
	return 0;
}
