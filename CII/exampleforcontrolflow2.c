//find the great among three number
#include <stdio.h>
int main()
{
    double num1=6.0,num2=4.5,num3=2.5;
    //find the greatest
    if (num1>num2&& num1>num3)
    {
       printf("num1 is grater");
    }
    else if( num2>num1&&num2>num3)
    {
      printf("num2 is grater");   
    }
    else
    {
        printf("num3 is grater");
    }
    return 0;
    
    
}