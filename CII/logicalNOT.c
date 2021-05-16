//logical NOT
#include <stdio.h>
int main()
{
    int age=24;
    printf("%d\n",!(age>=18));//real sense the following statement is true but we are usng NOT@!
    //providing false value so we are getting true because of NOT opereator
    printf("%d\n",!(age>=30));
    return 0;
}