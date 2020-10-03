#include<stdio.h>

int main(){
    int num1,i,multi;
    i=1;
    multi=1;
    printf("enter a number :");
    scanf("%d",&num1);
    
    while (i<=10)
    {
        multi=num1*i;
        printf("%d *  %d = %d\n",num1,i,multi);
        i++;

    }
    

}