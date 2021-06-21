
//	Day 69 of 365
//	Best Time to Buy & Sell Stock

#include <stdio.h>

int maxProfit(int arr[], int length, int *buy, int *sell)
{
	int profit = 0;
	
	for(int i=0;i<length-1;i++)
	{
		for(int j=i+1;j<length;j++)
		{
			if(profit < arr[j] - arr[i])
			{
				profit = arr[j] - arr[i];
				*buy = arr[i];
				*sell = arr[j];
			}
		}
	}
	
	return profit;
}

int main()
{
	int test[5][10]= {{5, 97, 11, 53, 109, 167},
					  {113, 151, 7, 31, 53, 7},
					  {31, 179, 191, 13, 5, 73},
					  {139, 23, 167, 179, 53, 179},
					  {13, 79, 139, 157, 29, 43}};
				 	  
	int buyposition, sellposition;
				 	  
	for(int i=0;i<5;i++)
	{
		printf("\nTest Case 0%d:\n",i+1);
		printf("[");
		
		for(int j=0;j<6;j++)
		    printf("%d ",test[i][j]);
		
		printf("\b]\n");
			
		printf("Max Profit: %d\n",maxProfit(test[i], 10, &buyposition, &sellposition));
		
		printf("When Bought at %d and Sell at %d\n",buyposition, sellposition);
	}
	
	return 0;
}
