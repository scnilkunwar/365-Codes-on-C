
//	Day 64 of 365
// 	Product of Array Except Self

#include <stdio.h>

long arrayProduct(int arr[], int len)
{
	long product = 1;
	for(int i=0;i<len;i++)
		product *= arr[i];
	
	return product;
}

void arrayProductWithoutSelf(int arr[], int prodArr[], int len)
{
	long product = arrayProduct(arr, len);
	for(int i=0;i<len;i++)
		prodArr[i] = product / arr[i];
}

void printArr(int testNo, int arr[], int len)
{
	printf("Test0%d:\n[",testNo);
	for(int i=0;i<len;i++)
		printf("%d ",arr[i]);
	printf("\b]\n");
}

int main()
{
	int testCase[4][5] = {{1,2,3,4,5},
						  {5,8,4,6,9},
						  {1,5,7,3,4},
						  {9,3,8,4,2}};
	int prodArr[5];
	for(int i=0;i<4;i++)
	{
		printArr(i+1, testCase[i], 5);
		arrayProductWithoutSelf(testCase[i], prodArr, 5);
		printArr(i+1, prodArr, 5);
		printf("\n\n");
	}
	return 0;
}
