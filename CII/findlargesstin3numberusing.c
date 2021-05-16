//find the largest among 3 numbers using if
#include <stdio.h>
int main()
{
    double n1,n2,n3;
    printf("Enter three input numbers:");
    scanf("%lf%lf%lf",&n1,&n2,&n3);// **** dont use , operator inside control
    ///control string creatiing incorrect results.
    // dont use ; delimeter inside if condition as it get terminated
    if(n1>n2&&n1>n3){
    printf("\nLargest number is %lf",n1);
    }
    if(n2>n1&&n2>n3){
    printf("\nLargest number is %lf",n2);
    }
    if(n3>n1&&n3>n2){
    printf("\nLargest number is %lf",n3);
    }
    return 0;
}