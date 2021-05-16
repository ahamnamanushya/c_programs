//find the size of data type
#include <stdio.h>
int main()
{
    int inttype;
    long int longinttype;
    double doubletype;
    char chartype;
    printf("size of int =%zu",sizeof(int));
    printf("\nsize of long int =%zu",sizeof(longinttype));
    printf("\nsize of double =%zu",sizeof(doubletype));
    printf("\nsize of char =%zu",sizeof(chartype));
    return 0;
}