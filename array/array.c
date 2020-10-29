#include<stdio.h>


int main(){
    int arr[100];
    int size=0;
    printf("how many numbers? ");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        printf("enter the %d element ",i);
        scanf("%d",&arr[i]);
    }
    int big=arr[0];
    
    for (int j=1;j<size;j++)
    {
        if(big<arr[j]){
            big=arr[j];
        }
    }

    printf("biggest element is %d\n",big);
}