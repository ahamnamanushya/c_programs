// here we are making a fibonacci series by using a for
#include <stdio.h>
int main()
{
    int i=1,n,f1=0,f2=1,f3;
    printf("Enter the number of fibonacci series to be found:");
    scanf("%d",&n);
    for ( i ; i <= n; i++)
    {
        f3=f1+f2;
        printf("%d\n",f3);
        f1=f2;
        f2=f3;
    }
    return 0;
    
}