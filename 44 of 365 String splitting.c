#include <stdio.h>
#include <string.h>

void strplit(char m_str[], char part[][20])
{
	int i = 0;
	char *piece;
	piece = strtok(m_str, " ");
	while(piece != NULL)
	{
		strcpy(part[i++], piece);
		piece = strtok(NULL, " ");
	}
}

int main()
{
	char str[] = "i love c but i hate she", part[10][20];
	
	
	strplit(str, part);
	for(int i=0;i<10;i++)
	{
		printf("%s\n",part[i]);
	}
	return 0;
}
