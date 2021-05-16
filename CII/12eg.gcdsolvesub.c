//here we are using subtraction method to find the GCD(Greates Common Divisor)
//which is inversly equal to the divison
//answer will be equal to the lowest no. that we assign so far
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers for the variable n1,n2:");
    scanf("%d\n%d",&n1,&n2);
    while (n2!=n1)
    {
        if(n1>n2)
        {
            n1-=n2;
        }
        else{
            n2-=n1;
        }
        // the while loop get incremented by the last updated value
        
    }
    printf("GCD=%d",n2);//here n1 and n2 became same as an end result
    // that is the value we want to aquire
    // unless we attain that certain value loop cannot be terminated
    // iteration continue.....until the required contitions are satisfied
    return 0;    
}
// this is only applicable for positive numbers only
// if we use negative wrong result will be produced at the console