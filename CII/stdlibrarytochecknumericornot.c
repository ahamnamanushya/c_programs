// here we are using standard lib function to find that the arguments which 
// has been passed is numeric or not
#include <stdio.h>
#include<ctype.h>// to include isdigit()
int main()
{
    char c1='g';
    if (isdigit(c1))// char isdigit(char) // isdigit prototype
    {
      printf("The enterd %c is a digit",c1 );// if statement true(1) exicuted
    }
    else
    {
        printf("The enterd %c is a non-numeric",c1 );// else statement falese(0) exicuted

    }
    return 0;
}