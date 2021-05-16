//find the factorial of the number;
#include <stdio.h>
int main()
{
    int n=10;
    int factorial=1;
    //factorial cannot be negative so,we have to forbid the user in adding a negative number as the input
    //to avoid this we are using a if else
    if (n<0)
    {
        printf("ERROR!");
     
    }
        else{
            for (int i = 2; i <= n; i++)//<= incluse 10;
            {
               factorial*=i;
            }
        }
        printf("Factorial=%d",factorial);
    
}
