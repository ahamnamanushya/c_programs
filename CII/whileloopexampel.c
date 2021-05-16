//while loop in case of unknown iteration
#include <stdio.h>
int main()
{
    double number;
    printf("Enter a number");
    scanf("%lf",&number);
    while (number>=0.00)
    {
        printf("Entered number is=%.2lf\n",number);
        printf("Enter a number:");
        scanf("%.2lf",&number);
    }
    return 0;
    
}