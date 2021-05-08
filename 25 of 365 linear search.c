#include <stdio.h>

int main()
{
	int arr[] = {1,5,8,4,2,7,3}, n;
	printf("enter element to search: ");
	scanf("%d",&n);
	int len = sizeof(arr)/sizeof(int), i;
	for(i=0;i<len;i++)
	{
		if(arr[i] == n)
		{
			printf("%d is found at position %d",n, i+1);
			break;
		}
	}
	if(i == len)
		printf("%d is not found in list",n);
	return 0;
}
