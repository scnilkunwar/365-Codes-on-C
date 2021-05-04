#include <stdio.h>

int main()
{
	int n, count=0;
	printf("enter upper limit:");
	scanf("%d",&n);
	printf("\t\tp/b\t\tp/b\t\t h\n");
	printf("\t---------------------------\n");
	
	for(int i=1;i<=n;i++)
	{
		long sq1 = i*i;
		for(int j=i;j<=n;j++)
		{
			long sq2 = j*j;
			long sq3 = sq1+sq2;
			for(int k=i;k<=n;k++)
			{
				if(k*k == sq3)
				{
					printf("%9d%9d%9d\n",i, j, k);
					count++;
					break;
				}
			}
		}
	}
	printf("there are total %d triplets",count);
	
	return 0;
}
