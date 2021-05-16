//swaping two int number
#include <stdio.h>
int main()
{
    int a=5,b=10,temp;
    temp=a;//beware of equalto
    a=b;
    b=temp;
    printf("a=%d\nb=%d",a,b);
    return 0;
}