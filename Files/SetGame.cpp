#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include "SetGame.h"

void SetGame::setFile()
{
	optionsFile.open("set.txt", std::ios::out);
	optionsFile.close();
	exit(0);
}

bool SetGame::FileExists()
{
	optionsFile.open("set.txt");
	if (optionsFile.good())
	{
		optionsFile.close();
		return true;
	}
	else
	{
		optionsFile.close();
		setFile();
		return false;
	}
}