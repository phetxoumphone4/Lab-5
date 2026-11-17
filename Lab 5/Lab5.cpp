/*****
Linden Phetxoumphone
Comuter Science Fall 2026
November 10, 2026
*****/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Precondition: 
// The user is ready to play the game
// The variables wins and loses start at 0

// Postconditions
// The user has had up to 20 chances to guess the number
// The total wins and loses are updated everytime the user plays the game

// Function Prototypes
void playGame(int& wins, int& losses);
void winMessage();
void loseMessage();
void playAgainMessage();


int main()
{
	// Seed the random number generator
    srand(time(NULL));
    
	// Initialize win and loss counters
    int wins = 0;
    int losses = 0;
    char playAgain;
    
	// Main game loop
    do
    {

        playGame(wins, losses);
        playAgainMessage();
        cin >> playAgain;
        
		// Checks if the user want to play again 
    } while (playAgain == 'Y' || playAgain == 'y');
	
    // Display total wins and losses
    cout << "\nTotal Wins: " << wins << endl;
    cout << "Total Losses: " << losses << endl;
    cout << "Thanks for playing!" << endl;

    return 0;
}
// Function Definitions
void playGame(int& wins, int& losses)
{
	// Generate a random number between 0 and 100
    int ranNum = rand() % 101;
    int guessNum;
    bool guessed = false;

    cout << "\nGuess a number between 0 and 100!" << endl;

    // Give the user 20 guesses
    for (int attempt = 1; attempt <= 20; attempt++)
    {
        cout << "Attempt " << attempt << " of 20: ";
        cin >> guessNum;

        if (guessNum == ranNum)
        {
            winMessage();
            guessed = true;
            wins++;
            break;
        }
        else if (guessNum < ranNum)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Too high! Try again." << endl;
        }
    }

    // Check if the user lost
    if (!guessed)
    {
        loseMessage();
        cout << "The correct number was: " << ranNum << endl;
        losses++;
    }
}

// Winning messages
void winMessage()
{
	// Generate a random message for winning
    int message = rand() % 10 + 1;

    switch (message)
    {
    case 1: 
        cout << "Great job! You got it!" << endl; 
        break;
    case 2: 
        cout << "Awesome! You won!" << endl; 
        break;
    case 3: 
        cout << "You guessed correctly!" << endl; 
        break;
    case 4: 
        cout << "Fantastic guessing!" << endl; 
        break;
    case 5: 
        cout << "You are a winner!" << endl; 
        break;
    case 6: 
        cout << "Excellent work!" << endl; 
        break;
    case 7:
        cout << "You figured it out!" << endl; 
        break;
    case 8:
        cout << "Amazing! You got the number!" << endl; 
        break;
    case 9:
        cout << "Well played! You won!" << endl; 
        break;
    case 10:
        cout << "Congratulations! You did it!" << endl; 
        break;
    }
}

// Losing messages
void loseMessage()
{
	// Generate a random message for losing
    int message = rand() % 10 + 1;

    switch (message)
    {
    case 1: 
        cout << "Sorry! Better luck next time!" << endl; 
        break;
    case 2: 
        cout << "You ran out of guesses!" << endl; 
        break;
    case 3: 
        cout << "Nice try! Keep practicing!" << endl; 
        break;
    case 4: 
        cout << "Unfortunately, you lost!" << endl; 
        break;
    case 5: 
        cout << "Game over! Try again!" << endl; 
        break;
    case 6: 
        cout << "Almost! Better luck next time!" << endl; 
        break;
    case 7: 
        cout << "Not this time!" << endl; 
        break;
    case 8: 
        cout << "No more attempts!" << endl; 
        break;
    case 9:
        cout << "That was a tricky number!" << endl;
        break;
    case 10:
        cout << "You lost this round!" << endl; 
        break;
    }
}

// Ask the user if they want to play again
void playAgainMessage()
{
    int message = rand() % 10 + 1;

    switch (message)
    {
    case 1:
        cout << "Play again? (Y/N): "; 
        break;
    case 2:
        cout << "Want to try again? (Y/N): ";
        break;
    case 3:
        cout << "Ready for another round? (Y/N): ";
        break;
    case 4:
        cout << "Would you like another chance? (Y/N): "; 
        break;
    case 5: 
        cout << "Want to play again? (Y/N): "; 
        break;
    case 6: 
        cout << "Another game? (Y/N): "; 
        break;
    case 7: 
        cout << "Give it another shot? (Y/N): ";
        break;
    case 8:
        cout << "Should we play again? (Y/N): ";
        break;
    case 9:
        cout << "Ready to continue? (Y/N): ";
        break;
    case 10:
        cout << "One more game? (Y/N): ";
        break;
    }
}

