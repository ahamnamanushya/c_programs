//find the greatest number b/w the two
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two number:");
    scanf("%d,%d",&num1,&num2);
    if (num1>num2)
    {
        printf("%d is greater than %d",num1,num2);
    }
    else if (num2>num1)
    {
        printf("%d is greater than %d",num2,num1);
    }
    else//no conditon############
     {
        printf("%d is equal to %d",num1,num2);
    }
   return 0;
}