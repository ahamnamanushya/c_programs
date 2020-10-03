#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter a first number :");
    scanf("%d", &num1);
    printf("enter second number :");
    scanf("%d",&num2);
    if(num1%num2==0){
        printf("%d is divisible  by %d", num1,num2);
    }
    else{
     printf("%d is not divisible  by %d", num1,num2);
    }

}