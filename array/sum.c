#include <stdio.h>

int main()
{
    int arr [10];
    for (int i = 0; i < 10; i++)
    {
        printf ("Enter element %d\n",i);
        scanf("%d",&arr[i]);

    }
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        sum= sum+arr[i];
    }
    printf("sum is %d", sum);

    
}