#include <stdio.h>
#include <math.h>

int main()
{
	int a, n;
	float r;
	printf("Enter 1st term of G.P.: ");
	scanf("%d",&a);
	printf("Enter total no of term of G.P.: ");
	scanf("%d",&n);
	printf("Enter common ratio of G.P.: ");
	scanf("%f",&r);
	
	float sum = 0;
	for(int i=0;i<n;i++)
	{
		float tn = a*pow(r, i);
		sum += tn;
	}
	
	printf("sum of G.P. is: %.3f",sum);
	return 0;
}
