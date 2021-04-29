#include <stdio.h>
int main()
{
	int n=7,i,j;
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("\t");
		}
		for(j=1;j<=(i*2-1);j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}
