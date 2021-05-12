#include <stdio.h>

long long factorial(int num)
{
	if(num == 0)
		return 1;
	
	else
		return num*factorial(num-1);
}

int main()
{
	int a, b;
	char ch;
	printf("enter 1st number: ");
	scanf("%d",&a);
	printf("enter 2nd number: ");
	scanf("%d",&b);
	
	again:
	printf("\nchoose option\npermutation/combination(p/c): ");
	scanf("%c",&ch);
	long long clcn;
	switch(ch)
	{
		case 'p':
			clcn = factorial(a)/factorial(a-b);
			printf("\n%dP%d = %lld", a, b, clcn);
		break;
		
		case 'c':
			clcn = factorial(a)/(factorial(a-b)*factorial(b));
			printf("\n%dC%d = %lld", a, b, clcn);	
		break;
		
		default:
			printf("\ninvalid option!!");
			goto again;
		break;
	}
	return 0;
}
