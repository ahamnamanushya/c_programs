// here we are actually using the fourmula for finding the 
// lCM=(n1*n2)/GCD
#include<stdio.h>
int GCD(int,int);// function prototype
int main()
{
    int a=120,b=72,gcd,rseult;
    gcd=GCD(a,b);
    rseult=(a*b)/gcd;
    printf("Result=%d",rseult);
    return 0;
}
int GCD(int n1,int n2)
{
    int result;
    while(n1!=n2){
    if(n1>n2)
    {
        n1-=n2;
    }
    else{
        n2-=n1;
    }//here the end result will be both n1 and n2 value will be same.
    }
    return n1;
    

}