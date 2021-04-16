#include <stdio.h>

int main()
{
	int num;
	
	printf("enter a number to check even or odd: ");
	scanf("%d", &num);
	
	if(num % 2 == 0)
	{
		printf("%d is even", num);
	}
	
	else
	{
		printf("%d is odd", num);
	}
	return 0;
}
