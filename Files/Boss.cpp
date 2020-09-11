#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Boss.h"
#include "GameName.h"
#include "Points.h"


void Boss::hitBoss()
{
	char buttonToClick[] = { 'a', 'A', 'b', 'B', 'C', 'c', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'i', 'I', 'j', 'J', 'h', 'H' };
	char button;
	int c;
	while (hp >= 0 && breastplate >= 0)
	{
		system("cls");
		c = rand() % + 20;
		std::cout << "Hp bossa: " << hp;
		std::cout << "\nPancerz bossa: " << breastplate;
		std::cout << "\nNacisnij " << buttonToClick[c];
		button = _getch();
		if(button == buttonToClick[c])
		{
			if (hp <= 0)
			{
				breastplate -= 8;
			}
			else if (breastplate <= 0)
			{
				hp -= 4;
			}
			else
			{
				breastplate -= 8;
				hp -= 8;
			}
		}
		else
		{
			std::cout << "\nHp bossa + 10"; hp += 10;
			std::cout << "\nPancerz bossa + 10"; breastplate += 10;
		}
	}
	sendWin();

}

void Boss::sendWin()
{
	NameGame message;
	Points addPoint;
	message.winMessage();
	addPoint.inflow(20000);
}