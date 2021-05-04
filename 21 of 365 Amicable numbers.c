#include <stdio.h>

int sum_of_factors(int num)
{
	int sum = 0;
	for(int i=1;i<=num/2;i++)
	{
		if(num % i == 0)
			sum += i;
	}
	return sum;
}

int main()
{
	int num1, num2;
	printf("enter 1st number: ");
	scanf("%d",&num1);
	
	printf("enter 2nd number: ");
	scanf("%d",&num2);
	
	if(num1 == sum_of_factors(num2))
	{
		if(num2 == sum_of_factors(num1))
			printf("\n%d and %d are amicable numbers",num1, num2);
		
		else
			printf("\n%d and %d are not amicable numbers",num1, num2);
	}
	
	else
		printf("\n%d and %d are not amicable numbers",num1, num2);
	
	return 0;
}
