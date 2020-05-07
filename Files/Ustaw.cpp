#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include "Ustaw.h"

void SetOptions::set()
{
	plik.open("ustawiono.txt", std::ios::out);
	plik.close();
	exit(0);
}

bool SetOptions::isTrue()
{
	plik.open("ustawiono.txt");
	if (plik.good())
	{
		plik.close();
		return true;
	}
	else
	{
		plik.close();
		set();
		return false;
	}
}