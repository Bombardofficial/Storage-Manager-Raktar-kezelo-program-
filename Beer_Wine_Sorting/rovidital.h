#pragma once
#include "ital.h"
class rovidital : public ital
{
public:
	rovidital(double alkohol, string gyarto, string termek) : ital(gyarto, termek), alkohol(alkohol) {};
	int melyikSor();
	void kiir();
	void mentes();
protected:
	double alkohol;

};