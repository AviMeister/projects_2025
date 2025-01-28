#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, guess;
    srand(time(0));
    randomNumber = rand () % 10 + 1;

    printf("Welcome to my number guessing game!!\n");
    printf("There is a number chosen between 1 and 10. \n");
    printf("Try to guess what it is!\n\n");

    while(1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == randomNumber)
        {
            printf("Congratsss!! You guessed it!!: %d\n", randomNumber);
            break;
        }
            else if (guess > randomNumber)
        {
            printf("Too HIGH! Try again.\n");
        }
            else
        {   
            printf("Too LOW!! Try again.\n");
        }
    }

    printf("Thanks for playin'! Goodbye!\n");
    return 0;
}