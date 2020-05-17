#pragma once
#include <iostream>
#include <fstream>

class SetOptions
{
private:
	std::fstream setOptions;
public:
	void set();
	bool isTrue();
};