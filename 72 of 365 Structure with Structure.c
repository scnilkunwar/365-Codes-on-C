
// Day 72 of 365 
// Structure with Structure
// Finding Area of Rectangle Using Two Opposite Vertex

#include <stdio.h>
typedef struct
{
	int x;
	int y;
} cornerPoints;

typedef struct
{
	cornerPoints topLeft;
	cornerPoints buttomRight;
} area;

int main()
{
	area a1 = {{2, 7},
	           {5, 4}};

	area a2 = {{1, 9},
	           {4, 5}};

	int length, breadth;

	length = a1.buttomRight.x - a1.topLeft.x;
	breadth = a1.topLeft.y - a1.buttomRight.y;
	printf("Area of 1st rectangle: %d sq. unit\n", length * breadth);

	length = a2.buttomRight.x - a2.topLeft.x;
	breadth = a2.topLeft.y - a2.buttomRight.y;
	printf("Area of 2nd rectangle: %d sq. unit\n", length * breadth);

	return 0;
}
