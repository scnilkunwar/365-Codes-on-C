#include <stdio.h>

long long binary(int dec)
{
	if (dec == 0)
		return 0;
    else
    	return (dec % 2) + 10 * binary(dec / 2);
}
     
int main()
{
	int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("The binary equivalent: %lld\n",binary(num));
    return 0;
}
