#pragma once
#include "ital.h"
class udito : public ital
{
public:
	udito(double kiszereles, string gyarto, string termek) : ital(gyarto, termek), kiszereles(kiszereles) {};
	int melyikSor();
	void kiir();
	void mentes();
protected:
	double kiszereles;

};