#include <iostream>
#include "Points.h"
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <filesystem>
#include "Boss.h"

void Points::openFileAndLoad(std::fstream &fileName, std::string upgradeName, int pointsRequired, int clicksSet)
{
	NameGame namee;
	fileName.open("points.txt", std::ios::out | std::ios::in);
	if (points >= pointsRequired)
	{
		upgrade.open(upgradeName);
		if (upgrade)
		{
			namee.alreadyBought(); 
			upgrade.close();
		}
		else
		{
			upgrade.close();
			payment(pointsRequired);
			fileName.open(upgradeName, std::ios::out);	
			fileName.close();
			namee.boughtMessage(); 
			clicks = clicksSet;
		}
	}
	else
	{
		namee.enoughPoints(); 
		fileName.close();
	}
}

void Points::payment(int howMany)
{
	pointsFile.open("points.txt", std::ios::in);
	std::string line;
	getline(pointsFile, line);
	std::istringstream(line) >> points;
	pointsFile.close();
	pointsFile .open("points.txt", std::ios::out);
	points -= howMany;
	pointsFile << points;
	pointsFile.close();
	system("cls");
}

int Points::pointsCount()
{
	pointsFile.open("points.txt", std::ios::in);
	std::string str;
	std::getline(pointsFile, str);
	std::istringstream(str) >> points;
	pointsFile.close();
	return points;
}

void Points::mainFuction()
{
	NameGame namee;
	while (true)
	{
		pointsCount();
		system("cls");
		namee.logo();
		std::cout << "\nClicks: " << points << "\n";
		std::cout << "\n";
		namee.upgradeShop();
		std::cout << "\n";
		namee.shopMenu();
		button = _getch();
		checkButton();
	}
}

void Points::inflow(int howMany)
{
	pointsFile.open("points.txt", std::ios::in);
	std::string line;
	getline(pointsFile, line);
	std::istringstream(line) >> points;
	pointsFile.close();
	pointsFile.open("points.txt", std::ios::out);
	points += howMany;
	pointsFile << points;
	pointsFile.close();
	system("cls");
}

void Points::checkButton() // 32, 98, 97 etc. are ASCII code!
{
	NameGame namee;
	button = tolower(button);
	switch (button)
	{	
		case (32):
		{
			pointsFile.open("points.txt", std::ios::out);
			points += clicks;
			pointsFile << points;
			pointsFile.close();
			break;
		}
		case (98):
		{
			upNames = "up1";
			openFileAndLoad(pointsFile, upNames, 169, 2);
			break;
		}
		case (97):
		{
			upNames = "up2";
			openFileAndLoad(pointsFile, upNames, 569, 3);
			break;
		}
		case (103):
		{
			upNames = "up3";
			openFileAndLoad(pointsFile, upNames, 969, 5);
			break;
		}
		case (114):
		{
			upNames = "up4";
			openFileAndLoad(pointsFile, upNames, 1369, 7);
			break;
		}
		case (100):
		{
			upNames = "up5";
			openFileAndLoad(pointsFile, upNames, 1669, 9);
			break;
		}
		case (106):
		{
			pointsFile.open("points.txt", std::ios::out);
			if (points >= 10000)
			{
				resetGame();
				namee.boughtMessage();
				pointsFile.close();
			}
			else
			{
				namee.enoughPoints();
				pointsFile.close();
			}
			break;
		}
		case (120):
		{
			Boss sendBoss;
			pointsFile.open("points.txt", std::ios::out);
			if (points >= 15000)
			{
				namee.fightStart();
				payment(15000);
				sendBoss.hitBoss();
			}
			else
			{
				namee.enoughPoints();
				pointsFile.close();
			}
			break;
		}
	}
}

void Points::boughtUpgrade()
{
	const std::string upName[] = { "up1", "up2", "up3", "up4", "up5" };
	int p = 1; 
	clicks = 1;
	for (int i = 0; i < 5; i++)
	{
		upgrade.open(upName[i]);
		if (i >= 1)
			p += 2;
		if (upgrade)
			clicks = p;
		upgrade.close();
	}
	p = 1;
}

void Points::resetGame()
{
	remove("up1");
	remove("up2");
	remove("up3");
	remove("up4");
	remove("up5");
	boughtUpgrade();
	payment(points);
}