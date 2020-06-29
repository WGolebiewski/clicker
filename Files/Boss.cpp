#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Boss.h"
#include "Points.h"

void Boss::hitBoss()
{
	char button;
	while (helthpoints >= 0 && breastplate >= 0)
	{
		system("cls");
		bossMenu();
		button = _getch();
		if(button == buttonForClick[numberToTab])
		{
			if (helthpoints <= 0)
			{
				breastplate -= 4;
			}
			else if (breastplate <= 0)
			{
				helthpoints -= 2;
			}
			else
			{
				breastplate -= 4;
				helthpoints -= 2;
			}
		}
		else
		{
			wrongButtonMessage();
		}
	}
	WinMessage();
}

void Boss::bossMenu()
{
	message.bossMenu();
	std::cout << "You must click: " << buttonForClick[numberToTab];
	std::cout << "\nBoss hp: " << helthpoints;
	std::cout << "\nBoss breastplate: " << breastplate << '\n';
	message.bossMenu();
}

void Boss::wrongButtonMessage()
{
	SetConsoleTextAttribute(hConsole, 12);
	std::cout << "\nThis is not a button which you must click!";
	std::cout << "\nBoss hp + 10"; helthpoints += 10;
	std::cout << "\nBoss breastplate + 10"; breastplate += 10;
	Sleep(1000);
}

void Boss::WinMessage()
{
	NameGame message;
	Points addPoint;
	message.winMessage();
	addPoint.inflow(20000);
}