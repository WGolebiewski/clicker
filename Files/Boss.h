#pragma once
#include <iostream>

class Boss
{
private:
	int hp = 500;
	int breastplate = 800;
public:
	void hitBoss();
	void sendWin();
};