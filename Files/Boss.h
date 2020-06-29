#pragma once
#include <iostream>
#include "TextMessage.h"

class Boss
{
private:
	int helthpoints = 700;
	int breastplate = 1200;
	void bossMenu();
	void wrongButtonMessage();
	constexpr static char buttonForClick[] = { 'a', 'A', 'b', 'B', 'C', 'c', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'i', 'I', 'j', 'J', 'h', 'H' };
	NameGame message;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
public:
	int numberToTab = rand() % + 20;
	void hitBoss();
	void WinMessage();
};
