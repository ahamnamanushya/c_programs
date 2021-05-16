// here we are doing a fibonacci series using while loop.
#include <stdio.h>
int main()
{
    int i=1,n,f1=0,f2=1,f3;
    printf("Enter a positive number:");
    scanf("%d",&n);
    printf("Fibonacci series are as follows:%d\n%d\n",f1,f2);
    while (i<=n)
    {
        f3=f1+f2;
        printf("%d\n",f3);
        f1=f2;
        f2=f3;
        i++;

    }
    return 0;
}