// here we are going to find the lcm of 2 numbers
// using 3 integers
#include<stdio.h>
int main()
{
    int n1,n2,max;
    // max is used to store the final result and also to checking
    printf("Enter two numbers for n1 and n2 respectively:");
    scanf("%d %d",&n1,&n2);
    max=(n1>n2)?n1:n2;// here we are assigning conditional operator
    // for explainig the situation that the min number which a
    // positive number could divide and get a positve quatient 
    // leaving behind '0' is none other than the number itself
    while(1)// we are keeping while condition always true because of 
    // the condition is uncertain.
    {
     if(max%n1==0&&max%n2==0)
     {
         printf("%d is the LCM of %dand %d",max,n1,n2);
         break;// compulsory or else the condition keep on checking
     }//first time the value of max will be equal to that of the highet 
     // value which we have supplied for the n1/n2
     ++max;// updating the condition.

    }
    return 0;
}