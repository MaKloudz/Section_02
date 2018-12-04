#include <iostream>
#include <string>

using namespace std;
int main() {

	//Introduce game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";

	//Get player's input
	cout << "Enter your guess\n";
	string Guess = "";
	cin >> Guess;

	//Repeat back the player's guess
	
	cout << "Your guess is: " << Guess;

	return 0;
}