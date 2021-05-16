//check the given number is odd or even
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if (number%2==0)
    {
        printf("\nThe given number %d is even.",number);
    }
    else{
         printf("\nThe given number %d is odd.",number);
    }
    return 0;
    
}