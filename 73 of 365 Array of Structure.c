
//	Day 73 of 365
//	Array of Structure
//	Volume of Cylinder

#include <stdio.h>
#include <math.h>
#define PI 3.1415

typedef struct 
{
 	float height;
 	float radius;
} cylynder;

int main()
{
	cylynder cylynders[3] = {{9, 7},
	                         {15.6, 5.4},
	                         {12, 8.3}};
	for(int i=0;i<3;i++)
	{
		printf("Volume of Cylynder %d: ",i+1);
		printf("%.3f unit cb.\n",PI * powf(cylynders[i].radius, 2) * cylynders[i].height);
	}
	
	return 0;
}


Volume of Cylynder 1: 1385.402 unit cb.
Volume of Cylynder 2: 1429.056 unit cb.
Volume of Cylynder 3: 2597.015 unit cb.
