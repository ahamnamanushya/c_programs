// find the greatest common factor =HCF
#include <stdio.h>
int main()
{
    int i,n1,n2,gcd;
    printf("Enter two numbers:");
    scanf("%d %d",&n1, &n2);
    for ( i = 1; i <=n1&&n2; i++)// here we are actually checking 2 function
    // at  a time
    {
       if (n1%i==0&& n2%i==0)
       {gcd=i;}//prmary gcd=1 on updating gcd=2if input is 2,4.
       //printf("%d is the HCF of both %d,%d\n",i,n1,n2);}
          
       
       
    }//printf("%d is the HCF of both %d,%d",i,n1,n2);//if we use we will
    // get wrong value  
    printf("%d is the HCF of both %d,%d",gcd,n1,n2);
    return 0;

    
}