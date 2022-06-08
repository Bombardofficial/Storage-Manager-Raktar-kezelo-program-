#pragma once
#include <string>
using namespace std;
class raktar;
class ital
{
public:
	ital(string gyarto, string termek) : gyarto(gyarto), termek(termek) {}
	virtual int melyikSor() = 0;
	~ital();
	virtual void kiir() = 0;
	virtual void mentes() = 0;
protected:
	string gyarto;
	string termek;
	//void print_ital();
	
};

