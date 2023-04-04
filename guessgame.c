#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int num = 45;
    int guesslimit = 3;
    int guesses = 0;
    bool outofguess = false;
    int userguess;

    while (outofguess == false)
    {
        printf("Input your guess: ");
        scanf("%d", &userguess);
        
        if (userguess != num && guesslimit >= guesses)
        {
            printf("your guess is incorrect\n");
            guesses = guesses + 1;

            if (guesses >= guesslimit)
            {
                outofguess = true;
                printf("\n");
                printf("you are out of guess\n");
                printf("\n");
                break;
            }
            

        }
        else if (userguess == num)
        {
            printf("\n");
            printf("you are correct \n");
            outofguess = true;
            printf("\n");
        }
        
        
    
    }
    


}