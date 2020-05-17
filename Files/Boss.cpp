#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Boss.h"
#include "GameName.h"
#include "Points.h"


void Boss::hitBoss()
{
	char button;
	while (hp >= 0 && breastplate >= 0)
	{
		system("cls");
		std::cout << "Boss hp: " << hp;
		std::cout << "\nBoss breastplate: " << breastplate;
		button = _getch();
		if (hp <= 0)
		{
			breastplate -= 4;
		}
		else if (breastplate <= 0)
		{
			hp -= 2;
		}
		else
		{
			breastplate -= 4;
			hp -= 2;
		}
	}
	sendWin();

}

void Boss::sendWin()
{
	NameGame message;
	Points addPoint;
	message.wonMessage();
	addPoint.addPoint(20000);
}