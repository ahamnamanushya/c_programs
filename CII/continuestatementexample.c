//example for continue statement where, input 5 numbers; negative is eliminated
#include <stdio.h>
int main()
{
    int number;
    for (int i = 0; i <=5; i++)
    {
        printf("\nEnter a number:");
        scanf("%d",&number);
        if (number<0)
        {
            continue;
        }
        printf("Enterd numbers is = %d",number);
    }
    return 0;
}