#include <stdio.h>

int check_palindrome(long long num)
{
	long long temp = num, rem, rev = 0;
	while(temp > 0)
	{
		rem = temp % 10;
		rev = rev*10 + rem;
		temp /= 10;
	}
	if(num == rev)
		return 1;
	else
		return 0;
}

int main()
{
	long long num;
	printf("Enter a num: ");
	scanf("%lld",&num);
	
	long long i = num + 1;
	while(1)
	{
		if(check_palindrome(i))
		{
			printf("Next palindrome is: %lld\n",i);
			break;
		}
		i++;
	}
	return 0;
}
