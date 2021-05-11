#include <stdio.h>

void print_arr(char topic[], int arr[], int len)
{
	puts(topic);
	for(int i=0;i<len;i++)
		printf("%d  ",arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {5,7,3,9,1,7,4,6,5};
	int len = sizeof(arr)/sizeof(int);
	print_arr("original array:",arr, len);
	
	for(int i=len-1;i>=0;i--)
	{
		for(int j=i-1;j>=0;j--)
		{
			arr[i] += arr[j];
		}
	}
	
	print_arr("cumulative sum:", arr, len);
	return 0;
}
