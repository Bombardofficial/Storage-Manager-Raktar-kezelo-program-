#include "raktar.h"
#include "sor.h"
#include "bor.h"
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
	// ital*: jellemz�en ki kell t�r�lni
	// vector: nem kell t�r�lni
	// array: ha new-val hoztuk l�tre, akkor t�r�lni kell
	// ital *** rakomany;
	// rakomany= new ital**[10];
	// rakomany[0] = new ital*[5];
	// array: ha []-lel hoztuk l�tre, akkor nem kell t�rlni
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
		int sorvagybor = rand() % 2;
		string gyarto;
		system("cls");
		
		if (sorvagybor == 0)
			cout << "Sor: \n";
		else
			cout << "Bor: \n";
		
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
		
		if (sorvagybor == 0) {
			// s�r
			double alkohol;
			
			cout << "________________________\n";
			cout << "Kerem az alkoholt! (szokoz nelkul)" << endl;
			cout << "\nBevitel: ";
			
			cin >> alkohol;
			cin.ignore();
			sor* uj = new sor(alkohol, gyarto, termek);
			int sorIndex = uj->melyikSor();
			rakomany[sorIndex].push_back(uj);
		}
		else {
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
