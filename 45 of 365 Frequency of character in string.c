#include <stdio.h>

void char_frequency(char str[], int freq[])
{
	for(int i=0;str[i] != '\0';i++)
	{
		freq[str[i]]++;
	}
}
int main()
{
	char str[] = "this is a string!!!";
	int freq[127] = {0};
	char_frequency(str, freq);
	
	printf(" char  |  frequency\n");
	printf("--------------------\n");
	for(int i=0;i<127;i++)
	{
		if(freq[i] != 0)
		{
			if(i == 32)
				continue;
			printf(" '%c'   =   %d\n", i, freq[i]);
		}
	}
	return 0;
}
