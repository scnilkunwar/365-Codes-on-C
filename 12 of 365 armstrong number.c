#include <stdio.h>
#include <math.h>

int intlen(long long num)
{
	int len = 0;
	while(num > 0)
	{
		num /= 10;
		len++;
	}
	
	return len;
}

int isarmstrong(long long num)
{
	int len = intlen(num);
	
	long long sum = 0, temp = num;
	while(temp > 0)
	{
		long long rem = temp % 10;
		sum += pow(rem, len);
		temp /= 10;
	}
	
	if(sum == num)
		return 1;
	
	else
		return 0;
}

int main()
{
	long long n;
	printf("enter a number: ");
	scanf("%lld",&n);
	
	if(isarmstrong(n))
		printf("%lld is armstrong number",n);
	else
		printf("%lld is not armstrong number",n);
	
	return 0;
}
