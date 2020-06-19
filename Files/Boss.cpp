#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Boss.h"
#include "GameName.h"
#include "Points.h"


void Boss::hitBoss()
{
	NameGame message;
	char buttonToClick[] = { 'a', 'A', 'b', 'B', 'C', 'c', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'i', 'I', 'j', 'J', 'h', 'H' };
	char button;
	int c;
	while (hp >= 0 && breastplate >= 0)
	{
		system("cls");
		c = rand() % + 20;
		message.bossMenu();
		std::cout << "You must click: " << buttonToClick[c];
		std::cout << "\nBoss hp: " << hp;
		std::cout << "\nBoss breastplate: " << breastplate << '\n';
		message.bossMenu();
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
			message.errorButton();
			std::cout << "\nThis is not a button which you must click!";
			std::cout << "\nBoss hp + 10"; hp += 10;
			std::cout << "\nBoss breastplate + 10"; breastplate += 10;
			Sleep(1000);
		}
	}
	sendWin();

}

void Boss::sendWin()
{
	NameGame message;
	Points addPoint;
	message.winMessage();
	addPoint.addPoint(20000);
}