
// every even number can be represented as sum of two prime numbers except 2

#include <stdio.h>
#include <math.h>

int isprime(int num)
{
	if(num<2)
		return 0;
	for(int i=2;i<=floor(sqrt(num));i++)
	{
		if(num%i == 0)
		{
			return 0;
			break;
		}	
	}
	return 1;
}

int main()
{
	int n;
	printf("enter an even number: ");
	scanf("%d",&n);
		
	if(n%2 != 0)
	{
		printf("%d is not even",n);
		return 1;
	}
	
	for(int i=2;i<n/2+1;i++)
	{
		if(isprime(i))
		{
			int b = n-i;
			if(isprime(b))
			    printf("%4d +%4d = %4d\n",i,b,n);
		}
	}
	return 0;
}
