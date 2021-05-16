// funtion definition is done by using the prototype
#include <stdio.h>
int add(int,int);//function prototype.//should match the number of arguments passed.
int main()
{
    int a=6,b=8,result;
    result= add(a,b);//function call.
    printf("result=%d",result);
    return 0;
}
//function definition
int add(int n1,int n2)
{
    int sum;
    sum=n1+n2;
    return sum;//sum is value is returned result variable.
}