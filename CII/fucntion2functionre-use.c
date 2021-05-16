//function definition
#include <stdio.h>
void greet(){
    printf("Hello!.");
    printf("How are you?\n.");
}
int main()
{
    greet();//function call 
    //control come back to this line after the function is called
    
    greet();//re use.
    greet();//re use.
    return 0;
}