#include <stdio.h>

int main()
{
    int num,i;
    printf("Enter a number :");
    scanf("%d", &num);
    //for loop
    for ( i = 1;i<=10; i++)
    {
        printf("%d * %d = %d\n", i,num,i*num );
    }
    
}
