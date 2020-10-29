#include <stdio.h>

int main(){
    int num[10]; //array declaring {191,20,34,54,54,45,20,657,6,7}
    int sum=0;
    int num1=20;

    //reading 10 elements
   for (int i = 0; i < 10; i++)
   {
     scanf("%d",&num[i]);
   }


    //printing the content of the array
   for (int i = 0; i < 10; i++)
   {
       printf("%d\n",num[i]);
       sum=sum+num[i]; // sum +=num[i];
   }
   

    for (int i = 0; i < 9; i++)
    {
        if(num1==num[i]){
            printf("element found");
            break;
        }
    }
    


   
}