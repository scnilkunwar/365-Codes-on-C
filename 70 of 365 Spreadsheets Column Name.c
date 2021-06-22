
//	Day 70 of 365
//	Spreadsheets Column Name

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *revstr(char str[])
{
	int len = strlen(str);
	char *temp = (char *)calloc(len, sizeof(char));
	
	for(int i=len-1;i>=0;i--)
		temp[len-i-1] = str[i];
	
	return temp;
}

char *columnName(int columnNum)
{
	int i = 0;
	char *nameBuffer = (char *)calloc(10, sizeof(char));
	
	while(columnNum > 0)
	{
		int index = columnNum % 26;
		if( index == 0)
		{
			index = 26;
			columnNum--;
		}
		nameBuffer[i] = index + 64;
		columnNum /= 26;
		i++;
	}
	nameBuffer[i] = '\0';
	nameBuffer = revstr(nameBuffer);
	
	return nameBuffer;
}

int main()
{
	char *name = (char *)calloc(10, sizeof(char));
	int testCase[] = {137, 67, 439, 281, 739, 643, 281, 97, 41, 653};
	
	for(int i=0;i<10;i++)
		printf("Column Number = %4d, Column Name = '%s'\n",testCase[i],columnName(testCase[i]));
	return 0;
}
