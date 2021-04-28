#include <stdio.h>

int main()
{
	int i;
	
	//initialization
	i = 0;
	loop:
		if(i <= 10 )
		{
			printf("%d ",i);
			i++;
			goto loop;
		}
		
	return 0;
}
