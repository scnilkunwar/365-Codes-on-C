
//	Day 60 of 365
//	Function Pointer

#include <stdio.h>

int my_func(int a, int b)
{
	if(a < b)
		return (a *= 3, b += a);
	else if(b < a)
		return (b *= 3, a += b);
	else
		return 2*(a + b);
}

int main()
{
	//declearing function pointer and assigning
	int (*func_ptr)(int, int);
	func_ptr = my_func;
	if(func_ptr == NULL)
	{
		printf("can't assign function to pointer");
		return 1;
	}
	
	int x = 6, y = 9;
	int result;
	
	result = my_func(x, y);
	printf("From function: %d\n",result);
	
	result = func_ptr(x, y);
	printf("From pointer: %d",result);
	
	return 0;
}
