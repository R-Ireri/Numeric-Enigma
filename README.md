# Numeric-Enigma
A classic Number Guessing Game written in C. In this game, the computer randomly selects a number within a specified range, and the player tries to guess the number with feedback given after each attempt. The game keeps track of the number of attempts made.

# Features
Allows the player to set a custom range of numbers.
Provides feedback after each guess (Too high, Too low, or Correct).
Tracks the number of attempts for each game.
Option to replay the game after each round.
# How It Works
>The player sets a lower and upper bound for the guessing range.

>The computer generates a random number within the specified range.

>The player tries to guess the number. After each guess, the game provides feedback:

  >"Too low!" if the guess is lower than the random number.

  >"Too high!" if the guess is higher than the random number.

  >"Congratulations!" when the guess is correct.

The game displays the total number of attempts made.
The player can choose to play again or exit the game.
# Prerequisites
C compiler (e.g., gcc)
