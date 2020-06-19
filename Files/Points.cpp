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
#include "Boss.h"

 // ---> Name speaks for itself <---

void Points::openFileAndLoad(std::fstream &fileName, std::string upgradeName, int howManyPointsPlayerMustHave, int howManyClicksAdd)
{
	NameGame namee;
	fileName.open("points.txt", std::ios::out | std::ios::in);
	if (pkt >= howManyPointsPlayerMustHave)
	{
		upgrade.open(upgradeName);
		if (upgrade)
		{
			namee.alreadyHave(); //This message will be sent, if you alreay have it
			upgrade.close();
		}
		else
		{
			upgrade.close();
			payment(howManyPointsPlayerMustHave); //Here you remove points
			fileName.open(upgradeName, std::ios::out);
			upgrade.close();
			fileName.close();
			namee.bought(); //This will be sent, if you buy it
			click = howManyClicksAdd;
		}
	}
	else
	{
		namee.notEnough(); //This message will be sent, if you haven't points
		fileName.close();
	}
}

// ---> payment is being used to remove points <---

void Points::payment(int howMany)
{
	points.open("points.txt", std::ios::in);
	std::string line;
	getline(points, line);
	std::istringstream(line) >> pkt;
	points.close();
	points.open("points.txt", std::ios::out);
	pkt = pkt - howMany;
	points << pkt;
	points.close();
	system("cls");
}

// ---> The fuction is very important, beacouse here return you how many points is in "points.txt" <---

int Points::howMany()
{
	points.open("points.txt", std::ios::in);
	std::string str;
	std::getline(points, str);
	std::istringstream(str) >> pkt;
	points.close();
	return pkt;
}

// ---> In this place you see your clicks, shop, game name and wait what button you click <---

void Points::add()
{
	NameGame namee;
	while (true)
	{
		howMany();
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

// ---> Here you check how many points you have <---

void Points::addPoint(int howMany)
{
	points.open("points.txt", std::ios::in);
	std::string line;
	getline(points, line);
	std::istringstream(line) >> pkt;
	points.close();
	points.open("points.txt", std::ios::out);
	pkt += howMany;
	points << pkt;
	points.close();
	system("cls");
}

// ----> It's a main function <----

void Points::addPoints()
{
	NameGame namee;
	x = tolower(x); //The x is char, you get this in void Points::add()
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
		{
			upNames = "up1";
			openFileAndLoad(points, upNames, 169, 2);
			break;
		}
		case 'a':
		{
			upNames = "up2";
			openFileAndLoad(points, upNames, 569, 3);
			break;
		}
		case 'g':
		{
			upNames = "up3";
			openFileAndLoad(points, upNames, 969, 5);
			break;
		}
		case 'r':
		{
			upNames = "up4";
			openFileAndLoad(points, upNames, 1369, 7);
			break;
		}
		case 'd':
		{
			upNames = "up5";
			openFileAndLoad(points, upNames, 1669, 9);
			break;
		}
		case 'j':
		{
			points.open("points.txt", std::ios::out);
			if (pkt >= 10000)
			{
				namee.bought();
				remove("up1");
				remove("up2");
				remove("up3");
				remove("up4");
				remove("up5");
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
		case 'x':
		{
			Boss sendBoss;
			points.open("points.txt", std::ios::out);
			if (pkt >= 15000)
			{
				namee.fightStart();
				payment(15000);
				sendBoss.hitBoss();
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

// ----> This is a condition, in which you check if someone bought an upgrade or not <----

void Points::is()
{
	std::string upName[] = { "up1", "up2", "up3", "up4", "up5" };
	int p = 1; //The variable is used to set how many clicks program must add
	click = 1;
	for (int i = 0; i < 5; i++)
	{
		upgrade.open(upName[i]);
		if (i >= 1)
			p += 2;
		if (upgrade)
			click = p;
		upgrade.close();
	}
	p = 1;
}