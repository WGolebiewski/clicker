#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include "Set.h"

void SetOptions::set()
{
	setOptions.open("set.txt", std::ios::out);
	setOptions.close();
	exit(0);
}

bool SetOptions::isTrue()
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
		set();
		return false;
	}
}