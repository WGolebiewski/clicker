#include <iostream>
#include <cstdlib>
#include <Windows.h>

class NameGame
{
private:
	HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	std::string up;
public:
	void name();
	void upgrade();
	void maszJuz();
	void zaMalo();
	void shop();
	void zakupione();
};