// check whether a charecter is alphabet
//using simple if else
#include <stdio.h>
int main()
{
    char c;
    printf("Enter a charecter:");
    scanf("%c",&c);
    if (((c>='a')&&(c<='z'))||(c>='A')&&(c<='Z'))//******Important comparison using relational operator

    {
        printf("%c is a charecter.",c);
    }
    else
    {
        printf("It is not a charecter.");
    }
    return 0;
    
}