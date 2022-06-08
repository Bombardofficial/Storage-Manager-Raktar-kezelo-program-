#pragma once
#include "ital.h"
class bor : public ital
{
public:
	bor(int evjarat, string gyarto, string termek) : ital(gyarto, termek), evjarat(evjarat) {};
	int melyikSor();
	void kiir();
	void mentes();
protected:
	int evjarat;
	
};


