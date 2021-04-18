#include <stdio.h>

int main()
{
	long num;
	
	printf("enter a number: ");
	scanf("%ld",&num);
	
	int temp = num, rem, sum = 0;
	while(temp > 0)
	{
		rem = temp % 10;
		sum += rem;
		temp /= 10;
	}
	
	printf("sum of digits of %ld is %d",num, sum);
	
	return 0;
}
