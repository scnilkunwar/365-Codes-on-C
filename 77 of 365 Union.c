
//	Day 77 of 365
//	Union

#include <stdio.h>
#include <string.h>

typedef union var
{
	int i_num;
	float f_num;
	char str[20];
} var;


int main()
{
	var v1;
	
	v1.f_num = 3.14;
	v1.i_num = 2;
	strcpy(v1.str, "union example");
	
	printf("%s",v1.str);
	return 0;
}
