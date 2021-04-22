#include <stdio.h>

int ispalindrome(int num)
{
	int temp = num, rev = 0, rem, sum;
	
	//reversing number
	while(temp > 0)
	{
		rem = temp % 10;
		rev = rev*10 + rem;
		temp /= 10;
	}
	
	if(rev == num)
		return 1;
	
	else
		return 0;
}

int main()
{
	int num;
	printf("enter a number to check palindrome: ");
	scanf("%d",&num);
	
	if(ispalindrome(num))
		printf("%d is palimdrome number",num);
	
	else
		printf("%d is not palindrome number",num);
	
	return 0;
}
