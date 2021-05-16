//check the given number is odd or even by using if else
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num%2==0)
    {
       printf("\nNumber is even.");
    }
    else{
        printf("\nNumber is odd.");

    }
    return 0;
    
    
}