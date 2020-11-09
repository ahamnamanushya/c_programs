#include<stdio.h>


int main(){
    int num=0;
    printf("enter a number between 1-7");
    scanf("%d",&num);

switch (num)
{
case 1:
    printf("monday");
    break;
case 2:
    printf("tuesday");
    break;
case 3:
    printf("wed");
    break;
case 4:
    printf("thursday");
    break;
case 5:
    printf("friday");
    break;
case 6:
    printf("saturday");
    break;
case 7:
    printf("sunday");
    break;

default:
    printf("invalid option");
    break;
}

}