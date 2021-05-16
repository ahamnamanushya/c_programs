//if..else ladder example number1
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d",&number);
    if(number>0){
        printf("\nThe given number %d is positive.",number);
    }
    else if (number==0)
    {
         printf("\nThe given numberis zero.");
        
    }
    else{
        printf("\n The given number %d is negative.",number);
    }
}