
//	Day 65 of 365
// Sum of Contiguous Elements

#include <stdio.h>

void contiguousSum(int arr[], int len, int sum, int *start, int *end)
{
	*start = 0;
	int tempSum = 0;
	int track = 0;
	
	for(int i=0;i<len;i++)
	{
		*end = i;
		tempSum += arr[i];
		if(tempSum == sum)
			return;
		
		else if(tempSum > sum)
		{
			i = track;
			track++;
			*start = track;
			tempSum = 0;
		}
		
		else if(track == len || (i == len-1 && tempSum < sum))
		{
			*start = 0;
			*end = -1;
			return;
		}
	}
}

int main()
{
	int testCase[6][5] = {{1,2,3,4,5},
					      {6,8,2,9,6},
					  	  {5,2,9,1,7},
					 	  {9,4,2,5,1},
					 	  {8,3,6,4,1},
						  {7,13,12,8,15}};
	int start, end;
	for(int i=0;i<5;i++) //testing and printing
	{
		contiguousSum(testCase[i], 5, testCase[5][i], &start, &end);
		
		printf("\nTest Case 0%d:\n[",i+1);
		for(int k=0;k<5;k++)
			printf("%d ",testCase[i][k]);
		printf("\b], Sum = %d, ",testCase[5][i]);
		
		if(end < start)
			printf("Not Possible\n");
		
		else
		{
			printf("[");
			for(int j=start;j<=end;j++)
		    	printf("%d ",testCase[i][j]);
			printf("\b]\n");
		}
	}
	return 0;
}
