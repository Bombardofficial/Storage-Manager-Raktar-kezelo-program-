#pragma once
#include "ital.h"
class sor : public ital
{
public:
	sor(double alkohol, string gyarto, string termek) : ital(gyarto, termek), alkohol(alkohol) {};
	int melyikSor();
	void kiir();
	void mentes();
protected:
	double alkohol;
	
};

