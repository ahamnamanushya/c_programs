//find all the factors of the given number
#include <stdio.h>
int main()
{
    int number=75;
    printf("The factors of %d are :",number);
    for (int i = 1; i <=number; i++)//every number is a factor of itself;
    {
        if (number%i==0)
        {
            printf("\n%d",i);
        }
        
    }
    return 0;
    
}