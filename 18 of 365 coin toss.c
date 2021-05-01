#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	char ch;
	printf("head or tail(h/t)\n");
	scanf("%c", &ch);
	a = rand() % 2;
	if(ch == 'h')
	{
		if(a == 0)
			printf("you loss its tail");
		
		else if(a == 1)
			printf("you win its head");
	}
	
	else if(ch == 't')
	{
		if(a == 0)
			printf("you win its tail");
		
		else if(a == 1)
			printf("you loss its head");
	}
	
	return 0;
}
