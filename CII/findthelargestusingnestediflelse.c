// find the largest among the given numbers using nested if else statements
#include <stdio.h>
int main()
{
    double n1,n2,n3;
    printf("Enter 3 numbers:");
    scanf("%lf %lf %lf",&n1,&n2,&n3);
    if (n1>n2)
    {
        if (n1>n3)
        {
           printf("n1 is greater");
        }
        else  {
           printf("n3 is greater");
        }
    }
        else{
            if (n2>n3)
            {
                printf("n2 is greater");
            }
            else {
           printf("n3 is greater");
            }
        }
        return 0;
        
}