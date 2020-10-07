#include<stdio.h>


float intrest(int p,int n,float r){
    float rate=(p*n*r)/100;
    return rate;
}



int main(){
    float c=intrest(432,2,3.2);
    printf("%f",c);
    
}