#pragma once
#include <iostream>
#include "GameName.h"

class Boss
{
private:
	int hp = 700;
	int breastplate = 1200;

	void logoBossMenu();
	void wrongButtonMessage();

	constexpr static char buttonToClick[] = { 'a', 'A', 'b', 'B', 'C', 'c', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'i', 'I', 'j', 'J', 'h', 'H' };
	NameGame message;
public:
	int c = rand() % + 20;
	void hitBoss();
	void sendWinMessage();
};
