#include <stdio.h>

int main()
{
    int ar[3]={1,2,3};
    int big=ar[0];
    for (int i = 0; i < 2; i++)
    {
        if(big<ar[i+1])
        {
            big=ar[i+1];
        }
    }
    printf("Biggest number is %d",big);

    
}