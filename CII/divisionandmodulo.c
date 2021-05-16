// using / and %
#include <stdio.h>
int main()
{
    int a=13 ,b=4;
    int quotient,remainder;
    quotient = a/b;
    remainder = a % b;
    printf("quotient=%d",quotient);
    printf("remainder=%d",remainder);
    return 0;
}