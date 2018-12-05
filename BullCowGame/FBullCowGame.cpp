#include "FBullCowGame.h"

FBullCowGame::FBullCowGame() { Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	const FString HIDDEN_WORD = "planet";
	MyHiddenWord = HIDDEN_WORD;

	MyCurrentTry = 1;
	return;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::IsGuessValid(FString)
{
	return false;
}

//recieves valid guess , increments number of turn and return couunts
FBullCowCount FBullCowGame::SubmitGuess(FString)
{
	//increment turn number
	MyCurrentTry++;

	//setup return variable
	FBullCowCount BullCowCount;
	//loop through all letters in the guess
		//compares letters against hidden word
			//if match
				//increment bulls in same place or cow when not in same place 
			//else 
	return BullCowCount;
}
