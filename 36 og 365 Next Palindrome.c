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
	printf("\n\nEnter a num: ");
	scanf("%lld",&num);
	
	long long i = num;
	while(1)
	{
		if(check_palindrome(i))
		{
			printf("Next palindome is: %lld\n",i);
			break;
		}
		i++;
	}
	return 0;
}
