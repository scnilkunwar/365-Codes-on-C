#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	printf("Enter coeff. of x^2 (a): ");
	scanf("%f",&a);
	printf("Enter coeff. of x (b): ");
	scanf("%f",&b);
	printf("Enter constant (c): ");
	scanf("%f",&c);
	
	float dcrmnt = b*b - 4*a*c;
	if(dcrmnt < 0)
	{
		printf("Root1 = %.2f + %.2fi",-b/(2*a), sqrtf(-dcrmnt)/(2*a));
		printf("\nRoot2 = %.2f - %.2fi",-b/(2*a), sqrtf(-dcrmnt)/(2*a));
	}
	
	else
	{
		printf("Root1 = %.2f",(-b + sqrtf(dcrmnt))/(2*a));
		printf("\nRoot2 = %.2f",(-b - sqrtf(dcrmnt))/(2*a));
	}
	return 0;
}
