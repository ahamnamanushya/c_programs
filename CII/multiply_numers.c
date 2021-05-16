//multiply numbers.
#include <stdio.h>
int main()
{
    double num1,num2,product;
    printf("Enter two numbers:");
    scanf("%lf\n%lf",&num1,&num2);
    product=num1*num2;
    printf("product =%lf",product);
    return 0;
}