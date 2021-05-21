#include <stdio.h>

int HCF(int a, int b)
{
	for(int i=a;i>0;i--)
	{
		if(a%i == 0 && b%i == 0)
			return i;
	}
}

int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	
	int count = 0;
	for(int i=x-1;i>0;i--)
	{
		if(HCF(x, i) == 1)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\nThere are %d coprimes of %d less than %d",count, x, x);
	return 0;
}
