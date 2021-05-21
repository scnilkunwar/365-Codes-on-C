#include <stdio.h>
#include <stdlib.h>

float average(int arr[], len)
{
	int sum = 0;
	for(int i=0;i<len;i++)
	{
		sum += arr[i];
	}
	
	return (float) sum / len;
}

int main()
{
	int n;
	printf("How many numbers?\n");
	scanf("%d",&n);
	
	printf("Enter %d numbers:\n",n);
	int *arr = (int *)calloc(n, sizeof(int));
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	
	printf("Average is: %.2f",average(arr, n));
	return 0;
}