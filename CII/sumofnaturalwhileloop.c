// sum of positive while loop
#include <stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    while (i<=n)
    {
       sum+=i;
       i++;
    }
    printf("The sum is %d",sum);
    return 0;
    
}