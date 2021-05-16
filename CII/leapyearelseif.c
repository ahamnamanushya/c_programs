find the leap year of the given number is leap year using else if
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year%100==0 && year%400==0)
    {
        printf("The given number is leap year:");
    }
    else if (year%4==0)
    {
       printf("The given number is leap year");
    }
    else {
        printf("The given number is not a leap year.");
    }
    return 0;
}
//***************************************************************************************************************
//find the leap year of the given number is leap year using else if
// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter a year:");
//     scanf("%d",&year);
//     if (year %400==0)
//     {
//         printf("%d is a leap year",year);
//     }
//     else if (year %100==0)
//     {
//         printf("%d is not a leap year",year);
//     }
//     else if(year %4==0)
//     {
//         printf("%d is a leap year",year);
//     }
//     else{
//         printf("%d is not a leap year",year);
//     }
//     return 0;
// }