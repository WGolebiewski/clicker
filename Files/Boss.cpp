#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Boss.h"
#include "Points.h"

void Boss::hitBoss()
{
	char button;
	while (hp >= 0 && breastplate >= 0)
	{
		system("cls");
		logoBossMenu();
		button = _getch();
		if(button == buttonToClick[c])
		{
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
		else
		{
			wrongButtonMessage();
		}
	}
	sendWinMessage();
}

void Boss::logoBossMenu()
{
	message.bossMenu();
	std::cout << "You must click: " << buttonToClick[c];
	std::cout << "\nBoss hp: " << hp;
	std::cout << "\nBoss breastplate: " << breastplate << '\n';
	message.bossMenu();
}

void Boss::wrongButtonMessage()
{
	message.errorButton();
	std::cout << "\nThis is not a button which you must click!";
	std::cout << "\nBoss hp + 10"; hp += 10;
	std::cout << "\nBoss breastplate + 10"; breastplate += 10;
	Sleep(1000);
}

void Boss::sendWinMessage()
{
	NameGame message;
	Points addPoint;
	message.winMessage();
	addPoint.addPoint(20000);
}