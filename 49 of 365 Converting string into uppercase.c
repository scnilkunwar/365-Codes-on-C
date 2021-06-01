#include <stdio.h>
#include <string.h>

void strupr(char str[])
{
	int len = strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
}

int main()
{
	char str[] = "SUNIL kunwar";
	strupr(str);
	puts(str);
	return 0;
}
