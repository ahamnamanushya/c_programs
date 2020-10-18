#include<stdio.h>

int main(){

    int num[5][5];
    int num1[5][5];
    int sum=0;

    
    for (int i = 0; i <5; i++) //row
    {
       for (int j = 0; j < 5; j++) //column
       {
         sum=num[i][j]+num1[i][j];
         printf("%d\n",sum);
       }
       
    }
    

}