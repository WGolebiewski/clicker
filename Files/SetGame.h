#pragma once
#include <iostream>
#include <fstream>

class SetGame
{
private:
	std::fstream optionsFile;
	void setFile();
public:
	bool FileExists();
};