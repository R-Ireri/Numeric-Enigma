#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void playGame(int lower, int upper);
int getValidGuess(int lower, int upper);

int main() {
    int lower, upper, playAgain;

    // Initialize random number generator
    srand(time(0));

    // Welcome message and game instructions
    printf("Welcome to the Number Guessing Game!\n");
    printf("In this game, the computer will randomly select a number within a specified range.\n");
    printf("Your task is to guess the number in as few attempts as possible.\n\n");

    // Game setup
    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);

    do {
        // Play the game
        playGame(lower, upper);

        // Ask the user if they want to play again
        printf("\nDo you want to play again? (1 for Yes, 0 for No): ");
        scanf("%d", &playAgain);

    } while (playAgain == 1);

    printf("Thank you for playing the Number Guessing Game! Goodbye!\n");
    return 0;
}

void playGame(int lower, int upper) {
    int randomNumber, guess, attempts = 0;

    // Generate a random number within the specified range
    randomNumber = (rand() % (upper - lower + 1)) + lower;

    printf("\nI have selected a random number between %d and %d.\n", lower, upper);
    printf("Can you guess the number?\n");

    // Main game loop
    do {
        // Get a valid guess from the player
        guess = getValidGuess(lower, upper);
        attempts++;

        // Check if the guess is correct, too high, or too low
        if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != randomNumber);
}

int getValidGuess(int lower, int upper) {
    int guess;
    
    // Prompt the user for a valid guess within the specified range
    while (1) {
        printf("Enter your guess (%d - %d): ", lower, upper);
        scanf("%d", &guess);

        // Validate the guess
        if (guess >= lower && guess <= upper) {
            return guess;
        } else {
            printf("Invalid guess! Please enter a number within the range %d to %d.\n", lower, upper);
        }
    }
}

