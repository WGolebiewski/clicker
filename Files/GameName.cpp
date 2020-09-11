#include "GameName.h"
#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <ctime>

void NameGame::logo(int numberColor)
{
    SetConsoleTextAttribute(hConsole, numberColor+1);
    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    SetConsoleTextAttribute(hConsole, numberColor);
    std::cout <<
        R"( ___           _           _              _              _                  
(  _`\        ( )_        (_ )           (_ )  _        ( )                 
| (_) )   _   | ,_) _   _  | |       ___  | | (_)   ___ | |/')    __   _ __ 
|  _ <' /'_`\ | |  ( ) ( ) | |     /'___) | | | | /'___)| , <   /'__`\( '__)
| (_) )( (_) )| |_ | (_) | | |    ( (___  | | | |( (___ | |\`\ (  ___/| |   
(____/'`\___/'`\__)`\___/'(___)   `\____)(___)(_)`\____)(_) (_)`\____)(_)   )";
    SetConsoleTextAttribute(hConsole, numberColor+1);
    std::cout << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
}

void NameGame::upgradeShop()
{
    SetConsoleTextAttribute(hConsole, 14);
    std::cout << "-------- UPGRADE'Y --------" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    std::cout << "1. Botulek - Cena 169 klikniec - zmienia kliknecia na 3 - kliknij B aby zakupic" << std::endl;
    std::cout << "2. Afro z Ameryki - Cena 569 klikniec - zmienia kliknecia na 5 - kliknij A aby zakupic" << std::endl;
    std::cout << "3. Gruchacz na ramie - Cena 969 klikniec - zmienia kliknecia na 7 - kliknij G aby miec" << std::endl;
    std::cout << "4. Bycie rakiem - Cena 1369 klikniec - zmienia kliknecia na 9 - kliknij R aby zakupic" << std::endl;
    std::cout << "5. Poglaskanie Bidoffa - Cena 1669 klikniec - zmienia kliknecia na 11 - kliknij D aby zakupic" << std::endl;
    std::cout << "6. Automatyczny botulek - Cena 2500 klikniec - automatyczne klikanie po 10 - kliknij V aby zakupic" << std::endl;
}

void NameGame::alreadyBought()
{
    SetConsoleTextAttribute(hConsole, 3);
    std::cout << "Juz to masz!" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    Sleep(300);
    system("cls");
}

void NameGame::enoughPoints()
{
    SetConsoleTextAttribute(hConsole, 3);
    std::cout << "Nie masz wystarczajaco klikniec!" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    Sleep(300);
    system("cls");
}

void NameGame::shopMenu()
{
    SetConsoleTextAttribute(hConsole, 10);
    std::cout << "-------- SHOP --------" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    std::cout << "1. Restart gry - koszt: 10 000 klikniec - nacisnij 'J' aby kupic" << std::endl;
    std::cout << "2. Walka z bossem - koszt: 15 000 klikniec - nacisnij 'X' aby kupic" << std::endl;

}

void NameGame::boughtMessage()
{
    SetConsoleTextAttribute(hConsole, 3);
    std::cout << "Kupiono :D" << std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    Sleep(300);
    system("cls");
}

void NameGame::fightStart()
{
    SetConsoleTextAttribute(hConsole, 3);
    std::cout << "Tak! Kupiles walke z bossem!" << std::endl;
    Sleep(1000);
    std::cout << "Fight!";
    SetConsoleTextAttribute(hConsole, 15);
    Sleep(300);
    system("cls");
}

void NameGame::winMessage()
{
    system("cls");
    SetConsoleTextAttribute(hConsole, 14);
    std::cout << "Wygrales!\n20000 zostalo dodane do twojego konta!" << std::endl;
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