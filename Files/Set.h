#pragma once
#include <iostream>
#include <fstream>

class SetOptions
{
private:
	std::fstream setOptions;
	void setFile();
public:
	bool theFileIsExists();
};