
//	58 of 365
//	Pointers in C

#include <stdio.h>

int main()
{
	int var = 5;
	int *ptr = &var;
	
	printf("adress of var from pointer = %x\n",ptr);
	printf("adress of var from variable = %x\n",&var);
	printf("value of var from pointer = %d\n",*ptr);
	printf("value of var from variable = %d\n",var);
	return 0;
}
