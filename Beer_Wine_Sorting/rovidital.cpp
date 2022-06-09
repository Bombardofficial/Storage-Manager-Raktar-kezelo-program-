#include "rovidital.h"
#include <iostream>
#include <fstream>

int rovidital::melyikSor()
{
	if (alkohol < 15) {
		return 0;
	}
	else if (alkohol < 25) {
		return 1;
	}
	else if (alkohol < 35) {
		return 2;
	}
	else if (alkohol < 45) {
		return 3;
	}
	else if (alkohol < 55) {
		return 4;
	}
	else if (alkohol < 65) {
		return 5;
	}
	else if (alkohol < 75) {
		return 6;
	}
	else if (alkohol < 85) {
		return 7;
	}
	else {
		return 8;
	}
}

void rovidital::kiir()
{
	cout << "Rovidital:\n\n";

	cout << "Gyarto: " << this->gyarto << endl;

	cout << "Termek: " << this->termek << endl;

	cout << "Alkoholszazalek: " << this->alkohol << endl;

	cout << "Sor: " << this->melyikSor() << "." << endl << endl;

	cout << "===================\n";
}

void rovidital::mentes()
{
	ofstream fajl;
	fajl.open("Mentes.txt", ios::app);
	fajl << "ROVIDITAL:\n\n";
	fajl << "Gyarto: " << this->gyarto << endl;
	fajl << "Termek: " << this->termek << endl;
	fajl << "Alkoholszazalek: " << this->alkohol << endl;
	fajl << "Sor: " << this->melyikSor() << "." << endl << endl;
	fajl << "===================\n";
	fajl.close();
}
