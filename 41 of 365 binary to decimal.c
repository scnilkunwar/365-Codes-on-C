#include <stdio.h>
#include <math.h>

int decimal(long long bin)
{
	static int i = 0;
	if(bin == 0)
		return 0;
	else
		return (bin % 10) * pow(2, i++) + decimal(bin/10);
}

int main()
{
	long long num;
    printf("Enter a binary number: ");
    scanf("%lld", &num);
    printf("The decimal equivalent: %d\n",decimal(num));
    return 0;
}
