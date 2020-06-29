#include "TextMessage.h"
#include <iostream>
#include <cstdlib>
#include <Windows.h>

void NameGame::logo()
{
    std::cout << ">>>>>>>" << std::endl;
    SetConsoleTextAttribute(hConsole, 12);
    std::cout << "C";
    SetConsoleTextAttribute(hConsole, 14);
    std::cout << "L";
    SetConsoleTextAttribute(hConsole, 10);
    std::cout << "I";
    SetConsoleTextAttribute(hConsole, 3);
    std::cout << "C";
    SetConsoleTextAttribute(hConsole, 5);
    std::cout << "K";
    SetConsoleTextAttribute(hConsole, 5);
    std::cout << "E";
    SetConsoleTextAttribute(hConsole, 12);
    std::cout << "R";
    std::cout << "\n";
    SetConsoleTextAttribute(hConsole, 15);
    std::cout << "<<<<<<<" << std::endl;
}

void NameGame::upgradeShop()
{
    SetConsoleTextAttribute(hConsole, 14);
    std::cout << "-------- UPGRADE'S --------" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    std::cout << "1. Upgrade 1 - cost 169 clicks - adds 1 - press 'B' to buy" << std::endl;
    std::cout << "2. Upgrade 2 - cost 569 clicks - adds 2 - press 'A' to buy" << std::endl;
    std::cout << "3. Upgrade 3 - cost 969 clicks - adds 4 - press 'G' to buy" << std::endl;
    std::cout << "4. Upgrade 4 - cost 1369 clicks - adds 6 - press 'R' to buy" << std::endl;
    std::cout << "5. Upgrade 5 - cost 1669 clicks - adds 8 - press 'D' to buy" << std::endl;
}

void NameGame::alreadyBought()
{
    SetConsoleTextAttribute(hConsole, 3);
    std::cout << "You already have this!" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    Sleep(300);
    system("cls");
}

void NameGame::enoughPoints()
{
    SetConsoleTextAttribute(hConsole, 3);
    std::cout << "You doesn't have enough click!" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    Sleep(300);
    system("cls");
}

void NameGame::shopMenu()
{
    SetConsoleTextAttribute(hConsole, 10);
    std::cout << "-------- SHOP --------" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    std::cout << "1. Game restart - cost: 10 000 clicks - press 'J' to buy" << std::endl;
    std::cout << "2. Boss fight - cost: 15 000 clicks - press 'X' to buy" << std::endl;
}

void NameGame::boughtMessage()
{
    SetConsoleTextAttribute(hConsole, 3);
    std::cout << "Bought :D" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    Sleep(300); 
    system("cls");
}

void NameGame::fightStart()
{
    SetConsoleTextAttribute(hConsole, 3);
    std::cout << "YES! You buy boss fight!" << std::endl;
    Sleep(1000);
    std::cout << "Fight start!";
    SetConsoleTextAttribute(hConsole, 15);
    Sleep(300);
    system("cls");
}

void NameGame::winMessage()
{
    system("cls");
    SetConsoleTextAttribute(hConsole, 14);
    std::cout << "You win!\n20000 points add to your account!" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    Sleep(1500); 
    system("cls");
}

void NameGame::bossMenu()
{
    SetConsoleTextAttribute(hConsole, 12);
    std::cout << "======= BOSS =======" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
}