#include <stdio.h>
#include <math.h>
#define pi 3.14//constant values

float area(float);  // function  prototype
int rarea(int,int);

int main()
{
    // float r=0;
    // printf("enter r :");
    // scanf("%f",&r);
    // float a=area(r);
    // printf("area of the circle is %.2f",a);


        int l,b;
        printf("enter value of l");
        scanf("%d", &l);
        printf("enter value of b");
        scanf("%d",&b);
        int area=rarea(l,b);
        printf("area of rectangel is :%d", area);
}

float area(float r)
{
  return pi*pow(r,2);//pow is the function of math.ie r,2=r*r

}
int rarea(int l,int b)
{
     return l*b;
}