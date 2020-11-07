#include <stdio.h>

int main()
{
    int options,num1=0,num2=0;
    printf("entere a number");
    scanf("%d",&num1);
    printf("enter a second number");
    scanf("%d",&num2);
    printf("1.Addition\n2.subtraction\n3.multiplication\n4.division");
    printf("\nenter your options");
    scanf("%d",&options);
    int ans=0;
    switch (options)
    {
    case 1:
        ans=num1+num2;
        break;
    case 2:
        ans=num1-num2;
        break;    
    case 3:
        ans=num1*num2;
        break;
    case 4:
        ans=num1/num2;
        break;
    
    default:
        printf("invalid option");
        break;
    }
    printf("answer is %d", ans);
    
}