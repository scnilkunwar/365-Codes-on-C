
//	Day 66 of 365
//	Median From Data Stream

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float medianOfArray(int arr[], int len)
{
	float medianPosition = (float)(len + 1) / 2;
	int floorMedianPositin = floorf(medianPosition);
	
	if(floorMedianPositin == medianPosition)
		return arr[floorMedianPositin - 1];
	
	else
		return (float)(arr[floorMedianPositin - 1] + arr[floorMedianPositin]) / 2;
}

void medianFromStream(int stream[], float medianList[], int len)
{
	int passArr[len];
	
	passArr[0] = stream[0];
	for(int i=1;i<len;i++)
	{
		medianList[i-1] = medianOfArray(passArr, i);
		int index = i;
		while(index > 0 && stream[i] < passArr[index - 1])
		{
			passArr[index] = passArr[index - 1];
			index--;
		}
		passArr[index] = stream[i];
	}
	medianList[len - 1] = medianOfArray(passArr, len);
}

int main()
{
	int testCase[5][6] = {{2, 5, 3, 7, 19, 7},
					      {3, 41, 11, 5, 31, 47},
					  	  {139, 61, 3, 83, 193, 5},
					  	  {14, 23, 15, 31, 35, 4},
					  	  {293, 967, 211, 401, 773, 11}};
	
	float medianArr[6];
	
	for(int i=0;i<5;i++)
	{
		medianFromStream(testCase[i], medianArr, 6);
		
		printf("\nTest Case 0%d:\n",i+1);
		
		printf("Stream: [");
		for(int j=0;j<6;j++)
			printf("%d ",testCase[i][j]);
		printf("\b]\n");
		
		printf("Median: [");
		for(int j=0;j<6;j++)
		{
			if(medianArr[j] == floorf(medianArr[j]))
				printf("%d ",(int)medianArr[j]);
		
			else
				printf("%.1f ",medianArr[j]);
		}
		printf("\b]\n");
	}
	
	return 0;
}
