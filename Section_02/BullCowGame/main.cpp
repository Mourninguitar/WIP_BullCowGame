#include <iostream>;
#include <string>;
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

// the entry point for our application
int main() 
{
	bool bPlayAgain = false;

	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);

	return 0;
}


void PrintIntro() {
	// introduce the game
	constexpr int WORD_LENGTH = 5;

	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?";
	std::cout << std::endl;
	
	return;
}

void PlayGame() 
{
	// loop for the number of turns asking for guesses
	constexpr int MaxGuesses = 5;
	for (int count = 1; count <= MaxGuesses; count++)
	{
		std::string Guess = GetGuess();
		std::cout << "Your guess was: " << Guess << ".";
		std::cout << std::endl;
	}

	return;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n) :";
	std::string Response = "";
	std::getline(std::cin, Response);
	
	return (Response[0] == 'y' || Response [0] == 'Y');
	std::cout << std::endl;

	return false;
}

std::string GetGuess() {
	// get a guess from the player
	std::cout << "\nEnter your guess: ";
	std::string Guess = "";

	std::getline(std::cin, Guess);
	return Guess;
} 