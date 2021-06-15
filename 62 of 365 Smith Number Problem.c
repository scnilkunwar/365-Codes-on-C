
//	Day 62 of 365
//	Smith Number Problem

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int sum_digit(long num)
{
	int sum = 0;
	while(num > 0)
	{
		int rem = num % 10;
		sum += rem;
		num /= 10;
	}
	
	return sum;
}

long prime_factor(long num)
{
	for(int i=2;i<=(int)sqrt(num);i++)
	{
		if(num % i == 0)
			return i;
	}
	
	return num;
}

bool is_smith(long num)
{
	int sum_num = sum_digit(num);
	int sum_factor = 0;
	
	while(num > 1)
	{
		long factor = prime_factor(num);
		sum_factor += sum_digit(factor);
		num /= factor;
	}
	
	if(sum_num == sum_factor)
		return true;
	
	return false;
}

int main()
{
	long num;
	printf("Enter a number: ");
	scanf("%ld",&num);
	
	printf("The smallest smith number: ");
	for(long i=num+1;;i++)
	{
		if(is_smith(i))
		{
			printf("%ld",i);
			break;
		}
	}
	
	return 0;
}
