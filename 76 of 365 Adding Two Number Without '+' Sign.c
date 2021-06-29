
//	Day 76 of 365
//	Adding Two Number Without '+' Sign

#include <stdio.h>

int addWithoutPlus(int num1, int num2)
{
	int sum = num1 - (-num2);
	return sum;
}

int main()
{
	
	int testCase[4][2] = {{79, 29},
						  {-61, 37},
						  {47, -31},
						  {-61, -73}};
	for(int i=0;i<4;i++)
		printf("%d and %d = %d\n",testCase[i][0], testCase[i][1], addWithoutPlus(testCase[i][0], testCase[i][1]));
	
	return 0;
}
79 and 29 = 108
-61 and 37 = -24
47 and -31 = 16
-61 and -73 = -134
