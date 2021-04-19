#include <stdio.h>
#include <math.h>

int main()
{
	int low, up;
	
	printf("enter lower limit: ");
	scanf("%d",&low);
	printf("enter upper limit: ");
	scanf("%d",&up);
	
	int low_sqrt = ceil(sqrt(low));
	int up_sqrt = floor(sqrt(up));
	
	for(int i=low_sqrt; i<=up_sqrt; i++)
	{
		printf("%d, ",i*i);
	}
	
	printf("\b\b");
	
	return 0;
}
