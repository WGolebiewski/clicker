#pragma once
#include <iostream>
#include <fstream>

class Points
{
private:
	std::string upNames;
	unsigned int pkt = 0; 
	int click = 1; 
	char x; //The variable is used to check if the user click space button
	std::fstream points,upgrade;
public:
	
	void add(); //It is endless loop which wait, which button will you click, and add points or buy upgrade
	int howMany(); //This is checking how many points you have
	void openFileAndLoad(std::fstream &fileName, std::string upgradeName, int howManyPointsPlayerMustHave, int howManyClicksAdd); //The name speaks for itself
	void addPoints(); //The function is checked which button was clicked
	void whatUpgradeUserBought(); //The function is responsible for the check out which upgrade you have
	void payment(int howany); //The function is used to remove points for buy upgrade
	void addPoint(int howMany); //This is used to add points for something special event 

};