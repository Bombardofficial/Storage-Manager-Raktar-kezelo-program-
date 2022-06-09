#include "raktar.h"
#include "sor.h"
#include "bor.h"
#include "rovidital.h"
#include "udito.h"
#include <iostream>

raktar::raktar()
{
	for(int i=0; i<10; i++)
	{
		vector<ital*> sor;
		rakomany.push_back(sor);
	}
}

raktar::~raktar()
{
	//Feljegyzes magamnak
	// ital*: jellemzõen ki kell törölni
	// vector: nem kell törölni
	// array: ha new-val hoztuk létre, akkor törölni kell
	// ital *** rakomany;
	// rakomany= new ital**[10];
	// rakomany[0] = new ital*[5];
	// array: ha []-lel hoztuk létre, akkor nem kell törlni
	// ital* rakomany[10][5];
	
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < rakomany[i].size(); j++)
		{
			delete rakomany[i][j];
		}
	}
}

void raktar::raktar_beolvas()
{
	bool tovabbi = false;
	do {
		cout << "Termekek:\n\n";
		cout << "	(1) Sor\n";
		cout << "	(2) Bor\n";
		cout << "	(3) Rovidital\n";
		cout << "	(4) Udito\n";
		cout << "\nBevitel: ";
		int italtipus;
		cin >> italtipus;
		string gyarto;
		system("cls");
		
		cout << "________________________\n";
		cout << "Kerem a gyartot! (szokoz nelkul)" << endl;
		cout << "\nBevitel: ";
		
		cin >> gyarto;
		system("cls");
		string termek;
		
		cout << "________________________\n";
		cout << "Kerem a termeket!" << endl;
		cout << "\nBevitel: ";
		
		cin >> termek;
		system("cls");
		
		if (italtipus == 1) {
			// sör
			double alkohol;
			
			cout << "________________________\n";
			cout << "Kerem az alkoholt! (szokoz nelkul)" << endl;
			cout << "\nBevitel: ";
			
			cin >> alkohol;
			//cin.ignore();
			sor* uj = new sor(alkohol, gyarto, termek);
			int sorIndex = uj->melyikSor();
			rakomany[sorIndex].push_back(uj);
		}
		if (italtipus == 2) {
			// bor
			int evjarat;

			cout << "________________________\n";
			cout << "Kerem az evjaratot!" << endl;
			cout << "\nBevitel: ";

			cin >> evjarat;
			//cin.ignore();
			bor* uj = new bor(evjarat, gyarto, termek);
			int sorIndex = uj->melyikSor();
			rakomany[sorIndex].push_back(uj);
		}
		if (italtipus == 3) {
			// rövidital
			double alkohol;

			cout << "________________________\n";
			cout << "Kerem az alkoholt! (szokoz nelkul)" << endl;
			cout << "\nBevitel: ";

			cin >> alkohol;
			//cin.ignore();
			rovidital* uj = new rovidital(alkohol, gyarto, termek);
			int sorIndex = uj->melyikSor();
			rakomany[sorIndex].push_back(uj);
		}
		if (italtipus == 4) {
			// üdítõ
			double kiszereles;

			cout << "________________________\n";
			cout << "Kerem a kiszerelest! (szokoz nelkul)" << endl;
			cout << "\nBevitel: ";

			cin >> kiszereles;
			//cin.ignore();
			udito* uj = new udito(kiszereles, gyarto, termek);
			int sorIndex = uj->melyikSor();
			rakomany[sorIndex].push_back(uj);
		}
		system("cls");
		cout << "\nSzeretne masik termeket? (i/n)" << endl;
		cout << "\nBevitel: ";
		
		char tovabb;
		cin >> tovabb;
		
		if (tovabb != 'i' && tovabb != 'n') {
			cin.clear();
			string s;
			cin >> s;
		}
		if (tovabb == 'n') {
			tovabbi = false;
		}
		else {
			tovabbi = true;
		}
		system("cls");
		
	} while (tovabbi);
}

void raktar::raktar_kiir()
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < rakomany[i].size(); j++)
		{
			
			rakomany[i][j]->kiir();
			rakomany[i][j]->mentes();
			
		}
	}
}
