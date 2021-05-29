#include <stdio.h>
#include <string.h>

void rmspace(char *str)
{
	int len = strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i] == ' ')
		{
			int j = i+1;
			for(j=i+1;str[j]==' ';j++);
			int k = j-i-1;
			while(j <= len)
			{
				str[j-k] = str[j];
				j++;
			}
			len = j;
		}
	}
}

int main()
{
	char my_str[] = "this      string   contains   extra   spaces";
	
	printf("With extra space:\n%s",my_str);
	rmspace(my_str);
	printf("\n\nWithout extra space:\n%s",my_str);
	
	return 0;
}
