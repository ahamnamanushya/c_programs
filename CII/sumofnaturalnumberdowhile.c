// calculate the sum of natural numbers using do while loop
#include <stdio.h>
int main()
{
    int n,i=1,sum=0;
    do
    {
       printf("Enter a positive number:");
       scanf("%d",&n);
    } while (n<=0);// ***************while loop terminate after the condition statement.******************
    for ( i = 0; i <=n; i++)
    {
        sum+=i;
    }
    return 0;
    
}