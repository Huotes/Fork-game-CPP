# Hangman Game

## Description
This is a simple hangman game implemented in C++. The game can be played either solo or with two players. In the one-player mode, a random word is chosen from a predefined set. In the two-player mode, one player picks the word, and the other player tries to guess it.

The game features an initial menu offering the following options:
1. **Play Alone**: Starts the game in one-player mode.
2. **Play with a Friend**: Starts the game in two-player mode.
3. **About**: Displays information about the game and its developer.
4. **Exit**: Quits the game.

## How to Play

1. Choose the desired option from the initial menu.
2. In one-player mode, a random word will be chosen. In two-player mode, one player enters the word for the other to guess.
3. The player tries to guess the word by entering letters or guessing the entire word.
4. Each incorrect letter decreases the available number of attempts.
5. The game ends when the player guesses the word or runs out of attempts.
6. After the game ends, you can choose to restart or exit.

## Requirements
- A C++ compiler to compile and run the code.

## How to Run
1. Clone the repository: `git clone https://github.com/Huotes/HANGMAN-CPP.git`
2. Navigate to the game directory: `cd repository-name`
3. Compile the code: `g++ hangman.cpp -o hangman`
4. Run the game: `./hangman`

## Contributions
Contributions are welcome! Feel free to open issues or submit pull requests with improvements or fixes.
