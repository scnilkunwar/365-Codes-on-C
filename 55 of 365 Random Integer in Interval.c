#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_in_interval(int a, int b)
{
	return rand()%(b-a) + a;
}

int main()
{
	srand(time(NULL));
	for(int i=0;i<10;i++)
		printf("%d ",random_in_interval(50, 60));
	
	return 0;
}
