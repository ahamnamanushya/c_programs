#include<stdio.h>


int main(){
    int num=5;

    printf("using for loop\n");

    for(int i=1;i<=10;i++){
        printf("%d\n",i*num);
    }
    
    printf("using while loop\n");

    int i=1;
    while (i<=10)
    {
        printf("%d\n",i*num);
        i++;
    }
    
    
    //break
    
    for(int i=0;i<11;i++){
        printf("%d",i);
        
        if(i%2==0){
            break;
        }
    }
    
    //continue
     for(int i=0;i<11;i++){
        if(i%2==0){
           continue;
        }
        printf("%d",i);
    }
    
    
    
}
