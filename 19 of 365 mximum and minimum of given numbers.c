#include <stdio.h>
#define n 100

int main()
{
	int num;
	int arr[n];
	printf("how many elements?\n");
	scanf("%d",&num);
	
	printf("enter %d elements:\n",num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int min = arr[0], max = arr[0];
	for(int i=0;i<num;i++)
	{
		if(arr[i] < min)
			min = arr[i];
		
		if(arr[i] > max)
			max = arr[i];
	}
	
	printf("maximum = %d\nminimum = %d",max, min);
	return 0;
}
