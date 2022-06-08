#include "bor.h"
#include <iostream>
#include <fstream>
int bor::melyikSor()
{
	if (evjarat % 10 < 1) {
		return 0;
	}
	else if (evjarat % 10 < 2) {
		return 1;
	}
	else if (evjarat % 10 < 3) {
		return 2;
	}
	else if (evjarat % 10 < 4) {
		return 3;
	}
	else if (evjarat % 10 < 5) {
		return 4;
	}
	else if (evjarat % 10 < 6) {
		return 5;
	}
	else if (evjarat % 10 < 7) {
		return 6;
	}
	else if (evjarat % 10 < 8) {
		return 7;
	}
	else if (evjarat % 10 < 9) {
		return 8;
	}
	else {
		return 9;
	}
}

void bor::kiir()
{
	cout << "BOR:\n\n";
	
	cout << "Gyarto: " << this->gyarto << endl;
	
	cout << "Termek: " << this->termek << endl;
	
	cout << "Evjarat: " << this->evjarat << endl;
	
	cout << "Sor: " << this->melyikSor() << "." << endl << endl;
	
	cout << "===================\n";
}

void bor::mentes()
{
	ofstream fajl;
	fajl.open("Mentes.txt", ios::app);
	fajl << "BOR:\n\n";
	fajl << "Gyarto: " << this->gyarto << endl;
	fajl << "Termek: " << this->termek << endl;
	fajl << "Evjarat: " << this->evjarat << endl;
	fajl << "Sor: " << this->melyikSor() << "." << endl << endl;
	fajl << "===================\n";
	fajl.close();
}
