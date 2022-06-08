#include "sor.h"
#include <iostream>
#include <fstream>
int sor::melyikSor()
{
	if (alkohol < 1) {
		return 0;
	}
	else if (alkohol < 2) {
		return 1;
	}
	else if (alkohol < 3) {
		return 2;
	}
	else if (alkohol < 4) {
		return 3;
	}
	else if (alkohol < 5) {
		return 4;
	}
	else if (alkohol < 6) {
		return 5;
	}
	else if (alkohol < 7) {
		return 6;
	}
	else if (alkohol < 8) {
		return 7;
	}
	else if (alkohol < 9) {
		return 8;
	}
	else {
		return 9;
	}
	
    return 0;
}

void sor::kiir()
{
	cout << "SOR:\n\n";
	
	cout << "Gyarto: " << this->gyarto << endl;
	
	cout << "Termek: " << this->termek << endl;
	
	cout << "Alkoholszazalek: " << this->alkohol << endl;
	
	cout << "Sor: " << this->melyikSor() << "." << endl << endl;
	
	cout << "===================\n";
}

void sor::mentes()
{
	ofstream fajl;
	fajl.open("Mentes.txt", ios::app);
	fajl << "SOR:\n\n";
	fajl << "Gyarto: " << this->gyarto << endl;
	fajl << "Termek: " << this->termek << endl;
	fajl << "Alkoholszazalek: " << this->alkohol << endl;
	fajl << "Sor: " << this->melyikSor() << "." << endl << endl;
	fajl << "===================\n";
	fajl.close();
}
