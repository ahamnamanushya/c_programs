#include <stdio.h>

int main()
{
    int a[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter %d,%d element",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
     int b[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter %d,%d element",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }

    int sum[2][2];
    for (int i = 0; i < 2; i++)
    {
        if (i==1)// no. of row(0,1)
        {
            printf("\n");
        }
        
        for (int j = 0; j < 2; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];// sum[0][0]=sum of 1st elemnt of A+sum of 1st element of B;
            printf("%d\t", sum[i][j]);
        }
        
    }
    
    
}