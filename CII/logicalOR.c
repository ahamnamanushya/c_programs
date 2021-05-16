#include <stdio.h>
int main()
{
    int age=24,salary=950,result;
    result= (age >= 18) || (salary=1000);
    printf ("result=%d\n", result);
    result= (age >= 27) || (salary==1000);//make ensure  to use  '=='
    printf ("result=%d\n", result);
    return 0;
}