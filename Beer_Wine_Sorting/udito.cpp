#include "udito.h"
#include <iostream>
#include <fstream>

int udito::melyikSor()
{
	if (kiszereles < 1) {
		return 0;
	}
	else if (kiszereles < 1.5) {
		return 1;
	}
	else if (kiszereles < 2) {
		return 2;
	}
	else if (kiszereles < 2.5) {
		return 3;
	}
	else {
		return 4;
	}
}

void udito::kiir()
{
	cout << "Udito:\n\n";

	cout << "Gyarto: " << this->gyarto << endl;

	cout << "Termek: " << this->termek << endl;

	cout << "Kiszereles: " << this->kiszereles << endl;

	cout << "Sor: " << this->melyikSor() << "." << endl << endl;

	cout << "===================\n";
}

void udito::mentes()
{
	ofstream fajl;
	fajl.open("Mentes.txt", ios::app);
	fajl << "UDITO:\n\n";
	fajl << "Gyarto: " << this->gyarto << endl;
	fajl << "Termek: " << this->termek << endl;
	fajl << "Kiszereles: " << this->kiszereles << endl;
	fajl << "Sor: " << this->melyikSor() << "." << endl << endl;
	fajl << "===================\n";
	fajl.close();
}
