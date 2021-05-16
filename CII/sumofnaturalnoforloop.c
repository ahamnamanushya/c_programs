// find the sum of natural number using for loop
#include <stdio.h>
int main()
{
    int i,number,sum=0;
    printf("Enter the number of natural numbers ,to find the sum: ");
    scanf("%d",&number);
    for ( i=1 ; i <=number; i++)
    {
       sum=sum+i;
    }
    printf("sum=%d",sum);
    return 0;
    
}