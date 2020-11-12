#include<stdio.h>
#include<math.h>

#define pi 3.14

float area(int r){
    return pi*pow(r,2);
}

float arear(int l,int b){
    return l*b;
}


int main(){
    int option;
    int num1,num2;
    float ans;
    printf("1. Area of rectangle/n 2. Area of circle ");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("enter l & b");
        scanf("%d ,%d" , &num1,&num2);

        ans=arear(num1,num2);
        printf("area is %d", ans);
        break;
    case 2:
        printf ("enter radious ");
        scanf("%d", num1);
        ans= area(num1);
        printf("area of circle is %d", ans);
        break;
    default:
        printf("invalid option");
        break;
    }


}