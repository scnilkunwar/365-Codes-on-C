#include <stdio.h>

int main()
{
	int n;
	printf("how many numbers?\n");
	scanf("%d",&n);
	
	int sum = (n*(n+1))/2;
	printf("sum of natural numbers up to %d is %d",n,sum);
	
	return 0;
}
