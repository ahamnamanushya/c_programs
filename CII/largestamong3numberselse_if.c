// find the largest among 3 number using else_if& else
#include <stdio.h>
int main()
{
    double n1,n2,n3;
    printf("Enter 3 numbers:");
    scanf("%lf %lf %lf",&n1,&n2,&n3);
    if (n1>n2&& n1>n3)
    {
       printf("%.2lf is greatest",n1);
    }
    else if (n2>n1&& n2>n3)
    {
       printf("%.2lf is greatest",n2);
    }
    else
     {
       printf("%.2lf is greatest",n3);
    }
    return 0;

}