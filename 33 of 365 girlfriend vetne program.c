#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "this string contain girlfriend";
	char str2[] = "this string doesnt";
	char *word;
	
	//for string1
	word = strstr(str1, "girlfriend");
	if(word != NULL)
	{
		int pos = word - str1 + 1;
		printf("\"girlfriend\" found at pos %d in string1\n",pos);
	}
	else
		printf("no \"girlfriend\" in string1\n");
	
	printf("\n");
	//for string2
	word = strstr(str2, "girlfriend");
	if(word != NULL)
	{
		int pos = word - str1 + 1;
		printf("\"girlfriend\" found at pos %d in string2\n",pos);
	}
	else
		printf("no \"girlfriend\" in string2\n");
	
	return 0;
}
