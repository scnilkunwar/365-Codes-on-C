#include <stdio.h>

int isperfect(int num)
{
	int sum = 0;
	for(int i=1;i<num;i++)
	{
		if(num % i == 0)
			sum += i;
	}
	
	if(sum == num)
		return 1;
	
	else
		return 0;
}

int main()
{
	int num;
	printf("enter a number to check perfect: ");
	scanf("%d",&num);
	
	if(isperfect(num))
		printf("%d is perfect number",num);
	
	else
		printf("%d is not perfect number",num);
	
	return 0;
}
