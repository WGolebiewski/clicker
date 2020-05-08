#include <iostream>
#include "Points.h"
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <filesystem>
#include "GameName.h"


void Points::payment(int howMuch)
{
	points.open("points.txt", std::ios::in);
	std::string linia;
	getline(points, linia);
	pkt = stoi(linia);
	points.close();
	points.open("points.txt", std::ios::out);
	pkt = pkt + howMuch;
	points << pkt;
	points.close();
	system("cls");
}

int Points::howMuch()
{
	points.open("points.txt", std::ios::in);
	std::string str;
	std::getline(points, str);
	std::istringstream(str) >> pkt;
	points.close();
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
		std::cout << "\nClicks: " << pkt << "\n";
		std::cout << "\n";
		namee.upgrade();
		std::cout << "\n";
		namee.shop();
		x = _getch();
		addPoints();
	}
}

void Points::removePoint(int howMuch)
{
	points.open("points.txt", std::ios::out);
	pkt -= howMuch;
	points << pkt;
	points.close();
}

void  Points::addPoints()
{
	NameGame namee;
	switch (x)
	{
		case (32):
		{
			points.open("points.txt", std::ios::out);
			pkt += click;
			points << pkt;
			points.close();
			break;
		}
		case 'b':
		case 'B':
		{
			points.open("points.txt", std::ios::out);
			if (pkt >= 169)
			{
				upgrade.open("up1.txt");
				if (upgrade)
				{
					namee.alreadyHave();
					upgrade.close();
				}
				else
				{
					upgrade.close();
					payment(169);
					upgrade.open("up1.txt", std::ios::out);
					upgrade.close();
					points.close();
					namee.bought();
					click = 2;
				}
				
			}
			else
			{
				namee.notEnough();
				points.close();
			}
			break;
		}
		case 'a':
		case 'A':
		{
			points.open("points.txt", std::ios::out);
			if (pkt >= 569)
			{
				upgrade.open("up2.txt");
				if (upgrade)
				{
					namee.alreadyHave();
					upgrade.close();
				}
				else
				{
					upgrade.close();
					payment(569);
					upgrade.open("up2.txt", std::ios::out);
					upgrade.close();
					points.close();
					namee.bought();
					click = 3;
				}
			}
			else
			{
				namee.notEnough();
				points.close();
			}
			break;
		}
		case 'g':
		case 'G':
		{
			points.open("points.txt", std::ios::out);
			if (pkt >= 969)
			{
				upgrade.open("up3.txt");
				if (upgrade)
				{
					namee.alreadyHave();
					upgrade.close();
				}
				else
				{
					upgrade.close();
					payment(969);
					upgrade.open("up3.txt", std::ios::out);
					upgrade.close();
					points.close();
					namee.bought();
					click = 5;
				}
			}
			else
			{
				namee.notEnough();
				points.close();
			}
			break;
		}
		case 'r':
		case 'R':
		{
			points.open("points.txt", std::ios::out);
			if (pkt >= 1369)
			{
				upgrade.open("up4.txt");
				if (upgrade)
				{
					namee.alreadyHave();
					upgrade.close();
				}
				else
				{
					upgrade.close();
					payment(1369);
					upgrade.open("up4.txt", std::ios::out);
					upgrade.close();
					points.close();
					namee.bought();
					click = 7;
				}
			}
			else
			{
				namee.notEnough();
				points.close();
			}
			break;
		}
		case 'd':
		case 'D':
		{
			points.open("points.txt", std::ios::out);
			if (pkt >= 1669)
			{
				upgrade.open("up5.txt");
				if (upgrade)
				{
					namee.alreadyHave();
					upgrade.close();
				}
				else
				{
					upgrade.close();
					payment(1669);
					upgrade.open("up5.txt", std::ios::out);
					upgrade.close();
					points.close();
					namee.bought();
					click = 9;
				}
			}
			else
			{
				namee.notEnough();
				points.close();
			}
			break;
		}
		case 'j':
		case 'J':
		{
			points.open("points.txt", std::ios::out);
			if (pkt >= 10000)
			{
				namee.bought();
				remove("up1.txt");
				remove("up2.txt");
				remove("up3.txt");
				remove("up4.txt");
				remove("up5.txt");
				points.close();
				is();
				payment(pkt);
			}
			else
			{
				namee.notEnough();
				points.close();
			}
			break;
		}
	}
}

void Points::is()
{
	upgrade.open("up1.txt");
	if (upgrade)
	{
		click = 2;
		upgrade.close();
		upgrade.open("up2.txt");
		if (upgrade)
		{
			click = 3;
			upgrade.close();
			upgrade.open("up3.txt");
			if (upgrade)
			{
				click = 5;
				upgrade.close();
				upgrade.open("up4.txt");
				if (upgrade)
				{
					click = 7;
					upgrade.close();
					upgrade.open("up5.txt");
					if (upgrade)
					{
						click = 9;
						upgrade.close();
					}
					else
					{
						upgrade.close();
					}
				}
				else
				{
					upgrade.close();
				}
			}
			else
			{
				upgrade.close();
			}
		}
		else
		{
			upgrade.close();
		}
	}
	else
	{
		click = 1;
		upgrade.close();
	}

}
