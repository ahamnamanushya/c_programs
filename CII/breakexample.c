//example for break statement //find both negative no.and sum of +ve no. 
#include <stdio.h>
int main()
{
    double number,sum=0.0;
    for(int i=0;i<=10;i++)
    {
        printf("Enter a number:");
        scanf("%lf",&number);
        if (number<0.00)
        {
            break;
        }
         sum+=number;
    }
         printf("\nnegative number=%.2lf",number);//we will move out of the loop only when the entered number is negative&it is printed as the last statement
         printf("\nsum of positivenumber =%.2lf",sum);
        return 0;
}