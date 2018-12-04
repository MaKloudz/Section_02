#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();


//Game entry point
int main() {
	
	PrintIntro();

	//Number of turns loop
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		GetGuessAndPrintBack();
	}
	
	return 0;
}

//Introduces game
void PrintIntro() {
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

string GetGuessAndPrintBack() {
	//Get player's input
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	//Repeat back the player's guess
	cout << "Your guess was: " << Guess << endl;
	cout << endl;
	return Guess;
}
