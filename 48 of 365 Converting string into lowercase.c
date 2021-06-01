#include <stdio.h>
#include <string.h>

void strlwr(char str[])
{
	int len = strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
}

int main()
{
	char str[] = "SUNIL kunwar)|&%]]`";
	strlwr(str);
	puts(str);
	return 0;
}
