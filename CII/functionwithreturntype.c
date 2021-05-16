// in this example we are using function with return type
#include <stdio.h>
int addNumber(int a,int b)
{
    int sum;
    sum = a+b;
    return sum;
}
int main(){
    int n1=6,n2=8,result;
    result=addNumber(n1,n2);
    printf("result =%d",result);
    return 0;
}