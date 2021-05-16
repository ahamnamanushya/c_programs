//here we are going to find the factorial of the given number using the
// recursion function
// ?? recursion- calling the same funcution again and again is knoswn as recursion.
#include<stdio.h>
long int multiplyNumber(int);// function prototype
int main()
{
    int n;
    printf("Enter a positive number to find the factorial:");
    scanf("%d",&n);
    printf("%d factorial=%ld",n,multiplyNumber(n));
    return 0;
}
long int multiplyNumber(int n){
    if(n>=1){
        return n*multiplyNumber(n-1);// fucntion prototype=> function is callig itself
        // n=5*(5-1(4-1(3-1(2-1(1//n<=1)))))
    }
    else{
        return 1;
    }
}
