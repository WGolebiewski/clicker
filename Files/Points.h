#pragma once
#include <iostream>
#include <fstream>
#include "TextMessage.h"
class Points
{
private:
	std::string upNames;
	unsigned int points = 0;
	int clicks = 1;
	char button;
	std::fstream pointsFile, upgrade;
	void resetGame();
public:

	void mainFuction();
	int pointsCount();
	void openFileAndLoad(std::fstream& fileName, std::string upgradeName, int howManyPointsPlayerMustHave, int howManyClicksAdd);
	void checkButton();
	void boughtUpgrade();
	void payment(int howany);
	void inflow(int howMany);
};