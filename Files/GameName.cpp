#include "GameName.h"
#include <iostream>
#include <cstdlib>
#include <Windows.h>

void NameGame::name()
{
    std::cout << ">>>>>>>" << std::endl;
    SetConsoleTextAttribute(hConsole, 12);
    std::cout << "K";
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

void NameGame::upgrade()
{
    SetConsoleTextAttribute(hConsole, 14);
    std::cout << "-------- UPGRADE'Y --------" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    std::cout << "1. Upgrade 1 - Cena 169 klikniec - dodaje 1 - kliknij B aby zakupic" << std::endl;
    std::cout << "2. Upgrade 2 - Cena 569 klikniec - dodaje 2 - kliknij A aby zakupic" << std::endl;
    std::cout << "3. Upgrade 3 - Cena 969 klikniec - dodaje 4 i SHOP - kliknij G aby miec" << std::endl;
    std::cout << "4. Upgrade 4 - Cena 1369 klikniec - dodaje 6 - kliknij R aby zakupic" << std::endl;
    std::cout << "5. Upgrade 5 - Cena 1669 klikniec - dodaje 8 - kliknij D aby zakupic" << std::endl;
}

void NameGame::notEnough()
{
    SetConsoleTextAttribute(hConsole, 3);
    std::cout << "Masz za malo klikniec!" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    Sleep(300);
    system("cls");
}

void NameGame::alreadyHave()
{
    SetConsoleTextAttribute(hConsole, 3);
    std::cout << "Masz to juz!!" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    Sleep(300);
    system("cls");
}
void NameGame::bought()
{
    SetConsoleTextAttribute(hConsole, 3);
    std::cout << "Zakupiono :D" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    Sleep(300);
    system("cls");
}

void NameGame::shop()
{
    SetConsoleTextAttribute(hConsole, 10);
    std::cout << "-------- SKLEP --------" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    std::cout << "1. Reset gry - Cena 10 000 klikniec - kliknij J aby zakupic" << std::endl;

}

