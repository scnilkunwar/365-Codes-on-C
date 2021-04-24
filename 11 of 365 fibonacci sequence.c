#include <stdio.h>

int main()
{
	int terms;
	
	printf("how many terms?\n");
	scanf("%d",&terms);
	
	printf("fibonacci sequence up to %d terms:\n",terms);
	for(int i=0;i<terms;i++)
	{
		long long static a = 0, b = 1, c;
		printf("%lld, ",a);
		
		c = a + b;
		a = b;
		b = c;
	}
	
	printf("\b\b");
	return 0;
}
