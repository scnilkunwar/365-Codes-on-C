
//	Day 78 of 365
//	Time period of Pendulum

#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define g 9.81

float timePeriod(float length)
{
	float temp = sqrtf(length / g);
	return 2*PI*temp;
}

int main()
{
	float testCase[] = {11, 29, 3, 79, 73};
	
	for(int i=0;i<5;i++)
	{
		printf("Length = %.2f m, ",testCase[i]);
		printf("Time Period = %.2f sec\n",timePeriod(testCase[i]));
	}
	return 0;
}
