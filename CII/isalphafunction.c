//check vowel or not using isaplha fuctio
//find the given charecter is vowel or consonent.
#include <stdio.h>
#include<ctype.h>//use to include isalpha() function.
int main()
{
    char c;//use only for '' assigned values not for variables
    int lowercase,uppercase;
    printf("Enter a letter:");
    scanf("%c",&c);
    lowercase= (c=='a'/*need to specify if it is a char using ''*/||/*usiing or operator*/c=='e'||c=='i'||c=='o'||c=='u');
    uppercase= (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if (!isalpha(c))
    {
        printf("Error! not an alphabet");
        //isalpha function in c that is used to check if the argument passed 
        //to the it is alphabet?
    }
    
    else if (uppercase || lowercase)
    {
      printf("Entered alphabet is a vowel.");
    }
    else
     {
      printf("Entered alphabet is a consonent.");
    }
    return 0;

}