#include<stdio.h>S

int main(){

    int num[5][5]={{1,2,3,4,5},{3,324,3443,34,4},{3,43,434,4,3},{23,43,34,3,4}};
    int num1[5][5];
    int sum=0;

    
    for (int i = 0; i <5; i++) //row
    {
       for (int j = 0; j < 5; j++) //column
       {
         sum=num[i][j]+num1[i][j];
         if(i==4){
           printf("\n");
         }
         printf("%d\t",num[i][j]);
       }
       
    }
    

}