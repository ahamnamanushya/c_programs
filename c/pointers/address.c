#include<stdio.h>

int main(){
    int a=10;
    int *p=&a;
    printf("%x\n",p);
    p+=1;
    
    printf("%x",p);
}