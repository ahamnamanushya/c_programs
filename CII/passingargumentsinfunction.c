//passing arguments in function 
#include <stdio.h>
void addNumber(int n1,int n2)// function definition// nothig is returned thats why void is used
{
    int sum;
    sum=n1+n2;
    printf("sum=%d",sum);
}
int main()
{
    int a=6,b=8;
    int c=6,d=18;
    addNumber(a,b);//function call.
    addNumber(c,d);
    return 0;
}