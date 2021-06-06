#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void shuffle(int arr[], int len)
{
	for(int i=len-1;i>1;i--)
	{
		int pos = rand()%i;
		int temp = arr[i];
		arr[i] = arr[pos];
		arr[pos] = temp;
	}
}

void prin_arr(char topic[], int arr[], int len)
{
	puts(topic);
	printf("[");
	for(int i=0;i<len;i++)
		printf("%d ",arr[i]);
	printf("\b]");
}

int main()
{
	srand(time(NULL));
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	prin_arr("original:", arr, len);
	shuffle(arr, len);
	prin_arr("\nshuffled:", arr, len);
	return 0;
}
