// here we are finding the factorial of the given number using for & if
#include <stdio.h>
int main()
{
    unsigned long long factorial=1;//initilaze value before using it in calculation
    int n,i;
    printf("Enter a number we need to find the factorial:");
    scanf("%d",&n);
    // we cant find the factorial of negative number.
    if(n<0)
    {
        printf("We cant find the factorila of the negative number.");
    }
    else{
        for ( i = 1; i <=n; i++)
        {
            factorial*=i;
        }
        
    }
    printf("Factorial of the number= %llu",factorial);
    return 0;
}