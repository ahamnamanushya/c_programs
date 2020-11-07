#include <stdio.h>

int main()
{
    int option,num1,num2;
     num1=0,num2=0;
    float answer=0.00;
    printf("enter first number");
    scanf("%d",&num1);
    printf("enter second number");
    scanf("%d",&num2);
    
    printf("enter an option");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
     answer = num1+num2;
      break;
    case 2:
     answer = num1-num2;
      break; 
    case 3:
     answer = num1*num2;
      break;
    case 4:
    answer=num1/num2;
     break;
    case 5:
    answer= num1 % num2;
    break;
    default:
    printf("invalid option %d",option);// num3=0(),0 output
    break;
    }
    printf("Result is % .2f", answer);



}