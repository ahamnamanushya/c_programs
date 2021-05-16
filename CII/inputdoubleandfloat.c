//input both double and float
#include <stdio.h>
int main()
{
    double num1;
    float num2;
    printf("enter a number:");
    scanf("%lf",&num1);
    printf("enter another number:");
    scanf("%f",&num2);
    printf("num1=%lf",num1);
    printf("\nnum2=%f",num2);
    return 0;
}