#pragma once
#include <string>

class FBullCowGame
{
public:
	void Reset(); // TODO make more rich return value.
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool IsGuessValid(std::string); // TODO make more rich return value.

private:
	int MyCurrentTry;
	int MyMaxTry;
};