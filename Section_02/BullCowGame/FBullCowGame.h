#pragma once
#include <string>

// NOTES FOR THE READER
// This file is currently not used, as this is the file I am working on and developing at the time of upload.

class {
public:
	void Reset(); //TODO make a more rich return value (Void change for int/float etc.)
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std::string); //TODO make a more rich return value
	

// Please ignore this and focus on the interface above, this was simply a tangent from the course presenter.
private:
	int MyCurrentTry;
	int MyMaxTries;

};
