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
	void name();
	void upgrade();
	void alreadyHave();
	void notEnough();
	void shop();
	void bought();
	void fightStart();
	void winMessage();
	void bossMenu();

	void errorButton();
};