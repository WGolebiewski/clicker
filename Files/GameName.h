#pragma once
#include <iostream>
#include <cstdlib>
#include <Windows.h>

class NameGame
{
private:
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	std::string up;
public:
	void logo(int numberColor);
	void upgradeShop();
	void alreadyBought();
	void enoughPoints();
	void shopMenu();
	void boughtMessage();
	void fightStart();
	void winMessage();
	void bossMenu();
};