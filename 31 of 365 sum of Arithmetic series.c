#include <stdio.h>

int main()
{
    int a, d, n;
    
    printf("Enter first term of A.P.: ");
    scanf("%d",&a);
    printf("Enter common difference of A.P.: ");
    scanf("%d",&d);
    printf("Enter total numbers in A.P.: ");
    scanf("%d",&n);
    
    int sum = (n*(2*a+(n-1)*d))/2;
    printf("Sum of A.P is: %d",sum);
  
    return 0;
}
