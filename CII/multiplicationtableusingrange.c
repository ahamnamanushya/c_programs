// here we are finding the multiplication table 
//range is not fixed
#include <stdio.h>
int main(){
    int n,i,result,range;
    printf("Enter an integer&its range ");
    scanf("%d %d",&n,&range);

    for ( i = 1; i <= range; i++)
    {
        result=n*i;
        printf("%d\n", result);
    }
    return 0;
    
}