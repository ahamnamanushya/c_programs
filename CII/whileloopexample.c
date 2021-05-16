//finding sum of numbers
#include <stdio.h>
int main()
{
    double sum=0.0,number;
    do
    {
        printf("enter a number:");
        scanf("%lf",&number);
        sum+=number;
    } while (number!=0.0);
    printf("sum=%.2lf",sum);
    return 0;
    
}
