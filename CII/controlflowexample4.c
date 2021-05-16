//here we are making a gussing game
#include <stdio.h>
int main()
{
    int number=35,guessNumber;
    printf("Enter a number between 1-50 :");
    while (1)
    {
        scanf("%d",&guessNumber);
        if(guessNumber>number)
        {
            printf("Enter a smaller number:");

        }
        else if (guessNumber<number)
        {
             printf("Enter a larger number:");
        }
        else{
            printf(" Congratualations!!");
            break ;//remember anout which statement which you like to break the loop
            //or else whole loop get break, use it in specified condition
            //unlesse or until it satisfy the necessory critirea.
        }
       

       
    }
    return 0;
    
}
