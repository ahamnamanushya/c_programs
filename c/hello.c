#include<stdio.h>

int main(){
    int num,fact=1;
    //5*4*3*2*1
    printf("enter a number:");
    scanf("%d",&num);
    int i; //intilaization
    //1*2*3*4*5

    //while loop
    // while (i<=num)   // condition checking
    // {
    //     fact=fact*i;
    //     i++;       //updation  
    
    // }

    //for loop

    for (i=1;i<=num;i++)
    {
    //1*2*3*4*5
      fact=fact*i;
    }
    



    printf("the factorial of %d is %d",num,fact);
    
}