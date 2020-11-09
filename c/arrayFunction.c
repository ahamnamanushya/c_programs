#include<stdio.h>

void print(int[]);
int findbig(int[]);

struct student
{
    int id;
    char name[20];
    float mark;
    char grade;
};


int main(){
    struct student vic;

   printf("enter a name");
   scanf("%s",&vic.name);


    int arr[20]={1,234,3,3,4,5,4,5,43,5,4,5,45,4,5,45};

  // print(arr);
   int big=findbig(arr);
   printf("big is %d ",big);
    
}


void print(int arr[]){
    for (int i = 0; arr[i]!='\0'; i++)
    {
         printf("%d\n",arr[i]);
    }
    
}

int findbig(int arr[]){
    int big=arr[0];

    for (int i = 0; arr[i]!='\0'; i++)
    {
        if(big<arr[i+1])
        {
            big=arr[i+1];
        }
    }
    return big;
}



