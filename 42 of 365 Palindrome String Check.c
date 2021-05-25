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
	char str1[50];
	printf("Enter a string: ");
	gets(str1);
	
	char *str2 = revstr(str1);
	if(strcmp(str1, str2) == 0)
		printf("'%s' is palindrome",str1);
	else
		printf("'%s' is not palindrome",str1);
	return 0;
}
