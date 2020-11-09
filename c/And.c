#include <stdio.h>

int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if (a>0 && a<100)// if both are true then only exicutes its code

    {
        printf("%d is positive & greater than 100", a);
        

    }

     else if (a>100 || a<200)
     {
         printf("%d is greater than 100 or less than ",a);
     }
        
}