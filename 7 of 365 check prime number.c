#include <stdio.h>
#include <math.h>

int isprime(int num)
{
	if(num < 2)
		return 0;
	
	else
	{
		for(int i=2;i<=floor(sqrt(num));i++)
		{
			if(num % i == 0)
				return 0;
		}
		return 1;
	}
}

int main()
{
	int num;
	printf("enter a number to check prime: ");
	scanf("%d",&num);
	
	if(isprime(num) == 1)
		printf("%d is prime number",num);
		
	else
		printf("%d is not prime number",num);
	
	return 0;
}
