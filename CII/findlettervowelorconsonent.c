//find the given charecter is vowel or consonent.
#include <stdio.h>
int main()
{
    char c;//use only for '' assigned values not for variables
    int lowercase,uppercase;
    printf("Enter a letter:");
    scanf("%c",&c);
    lowercase= (c=='a'/*need to specify if it is a char using ''*/||/*usiing or operator*/c=='e'||c=='i'||c=='o'||c=='u');
    uppercase= (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if (uppercase || lowercase)
    {
      printf("Entered alphabet is a vowel.");
    }
    else
     {
      printf("Entered alphabet is a consonent.");
    }
    return 0;

