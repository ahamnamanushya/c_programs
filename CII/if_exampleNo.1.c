//IF example No.1
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    //body of the if loop is executed only if the entered number is always lessthan 0
    if(number<0)
    {
        printf("%d is a negative integer", number);
    }
    printf("\nThis statement is always executed\n END");
    return 0;

}