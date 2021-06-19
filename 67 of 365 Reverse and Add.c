
//	Day 67 of 365
//	Reverse and Add

#include <stdio.h>
int steps;

long long reverse(long long num)
{
	long long rev = 0, rem;
	while(num > 0)
	{
		rem = num % 10;
		rev = rev*10 + rem;
		num /= 10;
	}
	return rev;
}

long long reverseAdd(long long num)
{
	long long rev = reverse(num);
	if(rev == num)
		return num;
	num += rev;
	steps++;
	return reverseAdd(num);
}

int main()
{
	printf("Input:\n");
	
	int N;
	scanf("%d ",&N);
	
	long long testCase[N];
	for(int i=0;i<N;i++)
		scanf("%lld ",testCase + i);
	
	printf("\nOutput:\n");
	for(int i=0;i<N;i++)
	{
		steps = 0;
		long long finalPlndrm = reverseAdd(testCase[i]);
		printf("%d %lld\n",steps, finalPlndrm);
	}
	
	return 0;
}
