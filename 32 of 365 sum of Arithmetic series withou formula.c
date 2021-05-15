#include <stdio.h>

int main()
{
    int a=3, d=5, n=12;
    
    printf("Enter first term of A.P.: ");
    scanf("%d",&a);
    printf("Enter common difference of A.P.: ");
    scanf("%d",&d);
    printf("Enter total numbers in A.P.: ");
    scanf("%d",&n);
    
    int sum = 0;
    int tn;
    for(int i=0;i<n;i++)
    {
    	tn = a + i*d; //nth term
    	sum += tn;
    }
    printf("Sum of A.P. is %d",sum);
  
    return 0;
}
