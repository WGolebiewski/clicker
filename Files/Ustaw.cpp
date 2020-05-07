#include <iostream>
#include "Ustaw.h"
#include <Windows.h>
#include <cstdlib>

void Ustaw::ustaw()
{
	plik.open("ustawiono.txt", std::ios::out);
	plik.close();
	exit(0);
}

bool Ustaw::isTrue()
{
	plik.open("ustawiono.txt", std::ios::in);
	if (plik.good() == true)
	{
		plik.close();
		return true;
	}
	else
	{
		plik.close();
		ustaw();
		return false;
	}
}