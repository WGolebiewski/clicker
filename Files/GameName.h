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
	void youAlreadyBoughtIt();
	void youHaveEnoughPoints();
	void gameLogo();
	void upgradeShop();
	void shopMenu();
	void youBuyIt();
	void startFightWithBoss();
	void winMessage();
	void bossMenu();
	void errorButton();
};