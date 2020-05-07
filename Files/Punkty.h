#include <iostream>
#include <fstream>

class Points
{
private:

	unsigned int pkt = 0;
	int click = 1;
	char x;
	int l = 0;
	std::fstream punkty,up;
public:
	void add();
	void removePoint(int ile);
	int howMuch();
	void addPoints();
	void is();
	void payment(int ilee);
};