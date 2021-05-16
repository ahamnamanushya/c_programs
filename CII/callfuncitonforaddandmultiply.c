// here we are using function for adding and also for multiplying 
// the given input value
#include<stdio.h>
int addNumber(int n1,int n2)
{
    int result;
    result=n1+n2;
    return result;
}
int multiplyNumber(int n3,int n4)
{
    int result;
    result=n3*n4;
    return result;

}
int main()
{
    int a=3,b=4,result;
    result=addNumber(a,b);
    printf("result=%d",result);
    result=multiplyNumber(a,b);
    printf("result=%d",result);
    return 0;

    
}