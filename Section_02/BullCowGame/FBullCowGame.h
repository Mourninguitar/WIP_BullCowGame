#pragma once
#include <string>



class {
public:
	void Reset(); //TODO make a more rich return value (Void change for int/float etc.)
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std::string); //TODO make a more rich return value
	

// Please try and ignore this and focus on the interface above
private:
	int MyCurrentTry;
	int MyMaxTries;

};