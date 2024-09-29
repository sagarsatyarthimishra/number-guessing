#include <stdio.h>
#include <stdlib.h>
#include <time.h> //both are use to generate ramdom number

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    // Printing random number
    //  printf("Random Number: %d\n",randomNumber);

    int no_of_guess = 0;
    int guessed;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Lower number please!\n\n");
        }
        else if (randomNumber > guessed)
        {
            printf("Greater number please!\n\n");
        }
        else{
            printf("Congrates!!\n");
        }
        no_of_guess++;
    } while (guessed != randomNumber);
    printf("You guessed the number in %d guesses", no_of_guess);
    return 0;
}