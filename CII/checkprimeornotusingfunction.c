//here we are using funcation to check whether the give number is 
//prime or not
#include<stdio.h>
int isprime(int n)
{
    int result;
    for (int i = 2; i<n; i++)
    {
        
        if (n % i==0)
        {
            return 0;
        }
        else
        return 1;
        
    }
    
}
int main()
{
    int n=64,result;
    result= isprime(n);
    if (result==0)
    {
      printf("%d is not a prime number",n); 
    }
    else{
      printf("%d is  prime number",n); 
    }
    return 0;
    
}