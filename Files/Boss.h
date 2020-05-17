#pragma once
#include <iostream>

class Boss
{
private:
	int hp = 700;
	int breastplate = 1200;
public:
	void hitBoss();
	void sendWin();
};
