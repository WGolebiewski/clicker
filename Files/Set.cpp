#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include "Set.h"

void SetOptions::setFile()
{
	setOptions.open("set.txt", std::ios::out);
	setOptions.close();
	exit(0);
}

bool SetOptions::theFileIsExists()
{
	setOptions.open("set.txt");
	if (setOptions.good())
	{
		setOptions.close();
		return true;
	}
	else
	{
		setOptions.close();
		setFile();
		return false;
	}
}