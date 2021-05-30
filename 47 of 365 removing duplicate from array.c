#include <stdio.h>

int rmduplicate(int arr[], int len)
{
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(arr[i] == arr[j])
			{
				int k = j;
				while(k < len)
				{
					arr[k] = arr[k+1];
					k++;
				}
				len--;
			}
		}
	}
	return len;
}

int main()
{
	int array[] = {1,4,7,1,4,8,1,5,7,9,4,1,5,4};
	int n = sizeof(array)/sizeof(array[0]);
	
	puts("Before removing duplicates:");
	for(int i=0;i<n;i++)
		printf("%d ",array[i]);
	
	n = rmduplicate(array, n);
	
	puts("\n\nAfter removing duplicates:");
	for(int i=0;i<n;i++)
		printf("%d ",array[i]);
	
	return 0;
}
