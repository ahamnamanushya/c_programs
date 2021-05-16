//here we are using the same ideology in the second part
//only deference that we experience from the above program 
// is that the given if we put input as negative value it will
// provide incorrect value . Therefore we  need to satisfy the above 
// situation we provide a conditionla operator
// where its false condition 1?2:(True):-(false) convert the give 
// negative input to positive
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the value for the n1&n2:");
    scanf("%d\n%d",&n1,&n2);
    // using conditionl operator
    n1=(n1>0)?n1:-n1;
    n2=(n2>0)?n2:-n2;
    while (n1!=n2)// if n1=n2 no need to find out 
    {
       if (n1>n2)
       {
           n1-=n2;
       }
       else{
           n2-=n1;
       }
    }
    printf("GCD=%d",n1);
    return 0;

    
}