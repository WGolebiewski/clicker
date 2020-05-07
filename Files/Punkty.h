#include <iostream>
#include <fstream>

class Punkty 
{
private:

	unsigned int pkt = 0;
	int click = 1;
	char x;
	int l = 0;
	std::fstream punkty,up;
public:
	void dodaj();
	void zabierz(int ile);
	int howMuch();
	void a();
	float xxx();
	void is();
	void wplac(int ilee);
};