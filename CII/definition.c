//pgm-2//defintion structure//30-4-2020
#include <stdio.h>
#define pi 3.14
void main()
{
 int h;
 float r,voleumof;
 printf("enter the value of radius=");
 scanf("%f", &r);
 printf("\nenter the value of height=");
 scanf("%d \n ",&h);
 printf("Entered radius: %f\n \n",r);
 voleumof= pi*r*r;
 printf("voleum of given cube is : %f", voleumof);
 
}