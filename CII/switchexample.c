//example: simple calculator using switch statement
#include <stdio.h>
int main()
{
    int num1=14,num2=5,result;
    char operator;//********important***************
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&operator);
    switch (operator)
    {
    case '+':
      printf("Result=%d",num1+num2);
        break;
    case '-':
    printf("Result =%d",num1-num2);
           break;
    case '*':                         //case value ':' important about :
     printf("Result =%d",num1*num2);
           break;
    case '/':
     printf("Result=%d",num1/num2);
           break;
    default:
     printf("Error!Invalid operator");
            break;
    }
    return 0;
}