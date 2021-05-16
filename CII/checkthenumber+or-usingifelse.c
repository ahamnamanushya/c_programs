//check wheather a Numer is positive or Negitive
//using elese if
#include <stdio.h>
int main()
{
    double num;
    printf("The entered number:");
    scanf("%lf",&num);
    if (num>0.0)
    {
        printf("The entered number is positive:");
    }
    else if(num<0.0)
    {
        printf("The entered number is negative:");
    }
    else{
        printf("The entered number is 0");
    }
    return 0;
}