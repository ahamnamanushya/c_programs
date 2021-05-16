// here we are finding the multiplication rable 
//range is fixed to 10
#include <stdio.h>
int main(){
    int n,i,result;
    printf("Enter an integer:");
    scanf("%d",&n);
    for ( i = 1; i <= 10; i++)
    {
        result=n*i;
        printf("%d\n", result);
    }
    return 0;
    
}