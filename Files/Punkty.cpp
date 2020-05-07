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
#include "Boss.h"


void Punkty::wplac(int ile)
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

int Punkty::howMuch()
{
	punkty.open("punkty.txt", std::ios::in);
	std::string str;
	std::getline(punkty, str);
	std::istringstream(str) >> pkt;
	punkty.close();
	return pkt;
}

void Punkty::dodaj()
{
	std::fstream bossik;
	Botulek abcdef;
	NameGame namee;
	while (true)
	{
			howMuch();
			system("cls");
			// name the game
			namee.NameGame::name();
			std::cout << "\nIlosc klikniec: " << pkt << "\n";
			std::cout << "\n";
			namee.upgrade();
			std::cout << "\n";
			namee.NameGame::shop();
			x = _getch();
			Punkty::a();
	}
}

void Punkty::zabierz(int ile)
{
	punkty.open("punkty.txt", std::ios::out);
	pkt -= ile;
	punkty << pkt;
	punkty.close();
}

void Punkty::a()
{
	NameGame namee;
	switch (x)
	{
		case (32):
		{
			xxx();
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
					namee.NameGame::maszJuz();
					up.close();
				}
				else
				{
					up.close();
					zabierz(169);
					up.open("up1.txt", std::ios::out);
					up.close();
					punkty.close();
					namee.NameGame::zakupione();
					click = 2;
				}
				
			}
			else
			{
				namee.zaMalo();
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
					namee.NameGame::maszJuz();
					up.close();
				}
				else
				{
					up.close();
					zabierz(569);
					up.open("up2.txt", std::ios::out);
					up.close();
					punkty.close();
					namee.NameGame::zakupione();
					click = 3;
				}
			}
			else
			{
				namee.zaMalo();
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
					namee.NameGame::maszJuz();
					up.close();
				}
				else
				{
					up.close();
					zabierz(969);
					up.open("up3.txt", std::ios::out);
					up.close();
					punkty.close();
					namee.NameGame::zakupione();
					click = 5;
				}
			}
			else
			{
				namee.zaMalo();
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
					namee.NameGame::maszJuz();
					up.close();
				}
				else
				{
					up.close();
					zabierz(1369);
					up.open("up4.txt", std::ios::out);
					up.close();
					punkty.close();
					namee.NameGame::zakupione();
					click = 7;
				}
			}
			else
			{
				namee.zaMalo();
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
					namee.NameGame::maszJuz();
					up.close();
				}
				else
				{
					up.close();
					zabierz(1669);
					up.open("up5.txt", std::ios::out);
					up.close();
					punkty.close();
					namee.NameGame::zakupione();
					click = 9;
				}
			}
			else
			{
				namee.zaMalo();
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
				namee.NameGame::zakupione();
				remove("up1.txt");
				remove("up2.txt");
				remove("up3.txt");
				remove("up4.txt");
				remove("up5.txt");
				punkty.close();
				is();
				zabierz(pkt);
			}
			else
			{
				namee.zaMalo();
				punkty.close();
			}
			break;
		}
	}
}

void Punkty::is()
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

float Punkty::xxx()
{
	float a = pkt;
	return pkt;
}