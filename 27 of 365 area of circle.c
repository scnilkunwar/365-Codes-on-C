#include <stdio.h>
#define PI 3.14159

int main()
{
	float r;
	printf("enter radius of circle: ");
	scanf("%f",&r);
	
	float area = PI*r*r;
	printf("area of circle = %f",area);
	return 0;
}
