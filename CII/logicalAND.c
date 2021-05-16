//performing logical AND operator
#include <stdio.h>
int main()
{
    int age=24,salary=950;
    int result;
    result=(age>=18 ||  salary>600);
    printf("%d\n",result);
    result=(age>=25 && salary>1000);
    printf("%d\n",result);
    return 0;
}