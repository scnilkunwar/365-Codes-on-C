#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *revstr(char str[])
{
	int len = strlen(str);
	char *temp = (char *)calloc(len, sizeof(char));
	
	for(int i=len-1;i>=0;i--)
	{
		temp[len-i-1] = str[i];
	}
	return temp;
	
}

int main()
{
	char my_str[] = "This is string";
	char *ch = revstr(my_str);
	printf("Original string:\n%s\n",my_str);
	printf("\nReversed string:\n%s",ch);
	return 0;
}
