//if else loop example1
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if (number>=0)
    {
        printf("The given number %d is positive \\ zero:",number);
        printf("\nif portion is exicuted");
    }
    else{
        printf("The given number %d  is negative",number);
        printf("\nelse portion is exicuted");
    }
    return 0;
}