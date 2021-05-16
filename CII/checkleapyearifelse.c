//leap year condition year/ by both 100&400; year/4but not by 400&100
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if (year%4==0)
    {
       if (year%400==0)
       {
          if (year%100==0)
          
            printf("%d is a leap year",year);
          
          else
              printf("%d is not a leap year",year);
          
          
       } 
       else
       {
           printf("%d is  a leap year",year);
       }     // divison by 4 is satisfied and it has to satisfy that
            // it is not divisible by both 100 and 400 too
            //it has to be in the 1st inner nested ifelse- else portion
       
    }
    else{
          printf("%d is not aleap year",year);
        }
        return 0;
    
}