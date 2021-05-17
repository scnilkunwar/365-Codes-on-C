#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x = 17, y = 23;
	printf("numbers before swapping:\nx = %d, y = %d\n", x, y);
	
	swap(&x, &y);
	
	printf("\nnumbers after swapping:\nx = %d, y = %d", x, y);
	return 0;
}
