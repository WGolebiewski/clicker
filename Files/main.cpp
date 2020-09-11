#include <iostream>
#include "Set.h"
#include "Points.h"
#include <time.h>
#include <cstdlib>

int main()
{
    srand(time(0));
	std::fstream setOptions;
	Points startGame;
	setOptions.open("set.txt");
	if (setOptions.good())
	{
		setOptions.close();
	}
	else
	{
		setOptions.close();
		setOptions.open("set.txt", std::ios::out);
		setOptions.close();
	}

	startGame.boughtUpgrade();
	startGame.mainFuction();
}