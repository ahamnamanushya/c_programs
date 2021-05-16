// find the square root using if else 
#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double discriminent,realpart,imaginary,root1,root2;
    printf("Enter the coefficent a,b,c:");
    scanf("%d %d %d", &a,&b,&c);
    discriminent= b*b-4*a*c;
    if (discriminent>0)
    {
       root1=-b/2*a +sqrt(-(discriminent)/(2*a));
       root2=-b/2*a -sqrt(-(discriminent)/(2*a));
       printf("root1=%.2lf \nroot2=%.2lf",root1,root2);
    }
    else if (discriminent==0)
    {
        root1=root2=-b/(2*a);
        printf("root1=%.2lf \nroot2=%.2lf",root1,root2);
       
    }
    else
    {
        realpart= -b/(2*a);
        imaginary= sqrt(-discriminent)/(2*a);
        printf("realpart=%.2lf imaginary=%.2lf",realpart,imaginary);
    }
    return 0;
    
}