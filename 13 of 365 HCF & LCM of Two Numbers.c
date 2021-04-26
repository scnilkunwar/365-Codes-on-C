#include <stdio.h>

int main()
{
	int num1, num2;
	printf("enter 1st number: ");
	scanf("%d",&num1);
	printf("enter 2nd number: ");
	scanf("%d",&num2);
	
	int i;
	for(i=num1;i>0;i--)
	{
		if(num1 % i == 0 && num2 % i == 0)
		{
			printf("HCF of %d and %d is %d",num1, num2,i);
			break;
		}
	}
	
	printf("\nLCM of %d and %d is %d",num1,num2,(num1*num2)/i);
	return 0;
}
