//find that the given number is odd or even using conditonal operator
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    (num%2==0)?printf("Entered number is even"):printf("Enterd number is odd");
    //use printf operator in the conditional operator.
    return 0;
}