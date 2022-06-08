#include <iostream>
#include "raktar.h"
#include "ital.h"
#include "bor.h"
#include "sor.h"
#include <fstream>

int main()
{
	raktar r;
	string kiiras;
	fstream inFile;
	bool mehet = true;
	
	do {
		
		cout << "Italbolt raktar\n";
		cout << "________________________\n\n";
		cout << "	1. Uj termek felvitele\n";
		cout << "	2. Hozzaadott termekek listaja\n";
		cout << "	3. Meglevo termek lista\n";
		cout << "	4. Mentes es programbol valo kilepes\n\n";
		cout << "Bevitel: ";
		
		int valasztas;
		cin >> valasztas;
		system("cls");
		
		if (cin.fail()) {
			cout << "Hibas bevitel!\n";
			cin.clear();
			string s;
			cin >> s;
		}
		if (valasztas == 1) {
			r.raktar_beolvas();
		}
		else if (valasztas == 2) {
			r.raktar_kiir();
			cout << "\n";
			system("pause");
			system("cls");
		}
		else if (valasztas == 3) {
			inFile.open("Raktar.txt");
			if (!inFile) {
				cout << "Hiba tortent a fajl betoltesekor";
				exit(1);
			}
			if (inFile.peek() == std::ifstream::traits_type::eof()) {
				cout << "Jelenleg nincs mentett termek a raktarban.\n";
				inFile.close();
				system("pause");
			}
			else{
				std::string line;
				while (getline(inFile, line)) {
					printf("%s", line.c_str());
					cout << "\n";
				}
				inFile.close();
				cout << "\n";
				system("pause");
			}
			system("cls");
		}
		else if (valasztas == 4)
		{
			cout << "Biztosan ki szeretne lepni a programbol? (i/n)" << endl;
			char bevitel;
			cout << "\nBevitel: ";
			cin >> bevitel;
			system("cls");
			
			if (cin.fail()) {
				cout << "Hibas bevitel!\n";
				cin.clear();
				string s;
				cin >> s;
			}
			if (bevitel == 'i') {
				mehet = false;
			}
			else if (bevitel == 'n') {
				mehet = true;
			}    
			
			string line;
			
			ifstream ini_file{ "Mentes.txt" };
			ofstream out_file{ "Raktar.txt" };

			if (ini_file && out_file) {

				while (getline(ini_file, line)) {
					out_file << line << "\n";
				}

				cout << "Mentes befejezve.\n";

			}
			else {
				printf("Hiba tortent a mentes folyaman.");
			}

			ini_file.close();
			out_file.close();
		}
	} while (mehet);
}

