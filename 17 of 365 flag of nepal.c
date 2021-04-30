#include <stdio.h>
void moon()
{
	printf("*   *         *   *\n");
	printf("*   *    *    *     *\n");
	printf("*    *  * *  *        *\n");
	printf("*      * * *            *\n");
}

void sun()
{
	printf("*           * *             *\n");
	printf("*         * * * *             *\n");
	printf("*        * * * * *              *\n");
	printf("*         * * * *                 *\n");
	printf("*           * *                     *\n");
}

int main()
{
	for(int i=0;i<39;i++)
	{
		if(i == 9)
		{
			moon();
			i += 3;
		}
		else if(i<17)
		{
			for(int j=0;j<=i;j++)
			{
				if(i == 16)
					printf("* ");
				else if(j == 0 || j == i)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
		
		else if(i == 30)
		{
			sun();
			i += 4;
		}
		
		else
		{
			for(int j=0;j<=i-16;j++)
			{
				if(i == 38)
					printf("* ");
				else if(j == 0 || j == i-16)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
	}
	return 0;
}
