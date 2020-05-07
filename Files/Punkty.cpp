#include <iostream>
#include "Punkty.h"
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <filesystem>
#include "GameName.h"


void Points::payment(int ile)
{
	punkty.open("punkty.txt", std::ios::in);
	std::string linia;
	getline(punkty, linia);
	pkt = stoi(linia);
	punkty.close();
	punkty.open("punkty.txt", std::ios::out);
	pkt = pkt + ile;
	punkty << pkt;
	punkty.close();
	system("cls");
}

int Points::howMuch()
{
	punkty.open("punkty.txt", std::ios::in);
	std::string str;
	std::getline(punkty, str);
	std::istringstream(str) >> pkt;
	punkty.close();
	return pkt;
}

void  Points::add()
{
	NameGame namee;
	while (true)
	{
		howMuch();
		system("cls");
		// name the game
		namee.name();
		std::cout << "\nIlosc klikniec: " << pkt << "\n";
		std::cout << "\n";
		namee.upgrade();
		std::cout << "\n";
		namee.shop();
		x = _getch();
		addPoints();
	}
}

void  Points::removePoint(int ile)
{
	punkty.open("punkty.txt", std::ios::out);
	pkt -= ile;
	punkty << pkt;
	punkty.close();
}

void  Points::addPoints()
{
	NameGame namee;
	switch (x)
	{
		case (32):
		{
			punkty.open("punkty.txt", std::ios::out);
			pkt += click;
			punkty << pkt;
			punkty.close();
			break;
		}
		case 'b':
		case 'B':
		{
			punkty.open("punkty.txt", std::ios::out);
			if (pkt >= 169)
			{
				up.open("up1.txt");
				if (up)
				{
					namee.alreadyHave();
					up.close();
				}
				else
				{
					up.close();
					payment(169);
					up.open("up1.txt", std::ios::out);
					up.close();
					punkty.close();
					namee.bought();
					click = 2;
				}
				
			}
			else
			{
				namee.notEnough();
				punkty.close();
			}
			break;
		}
		case 'a':
		case 'A':
		{
			punkty.open("punkty.txt", std::ios::out);
			if (pkt >= 569)
			{
				up.open("up2.txt");
				if (up)
				{
					namee.alreadyHave();
					up.close();
				}
				else
				{
					up.close();
					payment(569);
					up.open("up2.txt", std::ios::out);
					up.close();
					punkty.close();
					namee.bought();
					click = 3;
				}
			}
			else
			{
				namee.notEnough();
				punkty.close();
			}
			break;
		}
		case 'g':
		case 'G':
		{
			punkty.open("punkty.txt", std::ios::out);
			if (pkt >= 969)
			{
				up.open("up3.txt");
				if (up)
				{
					namee.alreadyHave();
					up.close();
				}
				else
				{
					up.close();
					payment(969);
					up.open("up3.txt", std::ios::out);
					up.close();
					punkty.close();
					namee.bought();
					click = 5;
				}
			}
			else
			{
				namee.notEnough();
				punkty.close();
			}
			break;
		}
		case 'r':
		case 'R':
		{
			punkty.open("punkty.txt", std::ios::out);
			if (pkt >= 1369)
			{
				up.open("up4.txt");
				if (up)
				{
					namee.alreadyHave();
					up.close();
				}
				else
				{
					up.close();
					payment(1369);
					up.open("up4.txt", std::ios::out);
					up.close();
					punkty.close();
					namee.bought();
					click = 7;
				}
			}
			else
			{
				namee.notEnough();
				punkty.close();
			}
			break;
		}
		case 'd':
		case 'D':
		{
			punkty.open("punkty.txt", std::ios::out);
			if (pkt >= 1669)
			{
				up.open("up5.txt");
				if (up)
				{
					namee.alreadyHave();
					up.close();
				}
				else
				{
					up.close();
					payment(1669);
					up.open("up5.txt", std::ios::out);
					up.close();
					punkty.close();
					namee.bought();
					click = 9;
				}
			}
			else
			{
				namee.notEnough();
				punkty.close();
			}
			break;
		}
		case 'j':
		case 'J':
		{
			punkty.open("punkty.txt", std::ios::out);
			if (pkt >= 10000)
			{
				namee.bought();
				remove("up1.txt");
				remove("up2.txt");
				remove("up3.txt");
				remove("up4.txt");
				remove("up5.txt");
				punkty.close();
				is();
				payment(pkt);
			}
			else
			{
				namee.notEnough();
				punkty.close();
			}
			break;
		}
	}
}

void Points::is()
{
	up.open("up1.txt");
	if (up)
	{
		click = 2;
		up.close();
		up.open("up2.txt");
		if (up)
		{
			click = 3;
			up.close();
			up.open("up3.txt");
			if (up)
			{
				click = 5;
				up.close();
				up.open("up4.txt");
				if (up)
				{
					click = 7;
					up.close();
					up.open("up5.txt");
					if (up)
					{
						click = 9;
						up.close();
					}
					else
					{
						up.close();
					}
				}
				else
				{
					up.close();
				}
			}
			else
			{
				up.close();
			}
		}
		else
		{
			up.close();
		}
	}
	else
	{
		click = 1;
		up.close();
	}

}
