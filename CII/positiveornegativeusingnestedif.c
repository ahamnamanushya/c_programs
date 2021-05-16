//find the number is positive or negative
//nested if
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if (num<=0)
    {
        
        if (num==0)
        {
            printf("you entered zero ");
        }
        else
        {
         printf("The number is negative");
        }
        
    }
    else
        {
         printf("The number is positive");
        }
    return 0;
}