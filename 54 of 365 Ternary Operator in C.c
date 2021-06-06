#include <stdio.h>

int main()
{
	int a, b;
	
	//	ternary operator
	//	condition ? if_statement : else statement

	a = 5, b = 10;
	a < b ? printf("a is less\n") : printf("b is less\n");
	
	a = 10, b = 5;
	a < b ? printf("a is less\n") : printf("b is less\n");
	
	return 0;
}
