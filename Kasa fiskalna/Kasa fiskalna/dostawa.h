#pragma once
#include <iostream>
#include <string>
#include "magazyn.h"
using namespace std;
void dostawa() {
	system("cls");
	int ilosc{};
	
	int kod{};
		do {
			cout << "Podaj kod produktu (-1 oznacza wyj�cie z funkcji): ";
			cin >> kod;
			if (kod == -1) { break; }

			while (kod < 0 || kod > 100) { cout << "Podano kod poza zakresem. Wprowad� jeszcze raz. "; cin >> kod; }
			cout << endl << "Otrzymano: " << p[kod].nazwa << ", wprowad� ilo�� otrzymanego produktu ";
			cin >> ilosc;
			p[kod].ilosc += ilosc;
		} while (kod != -1);
	
}


void nowy() {
	system("cls");
	int kod{};
	string nazwa{};
	float cena{};
	int ilosc;

	cout << "Wprowad� kod pod kt�rym b�dzie si� znajdowa� Tw�j produkt (-1 oznacza wyj�cie z funkcji):"<<endl;
	do {

		cin >> kod;
		if (kod == -1) { break; }

		p[kod].kod = kod;
		cout << "Podaj nazw� produktu: ";
		cin.ignore();
		getline(cin, nazwa);
		p[kod].nazwa = nazwa;
		cout << endl << "Podaj cen�: ";
		cin >> p[kod].cena;
		cout << endl << "Podaj ilo��: ";
		cin >> p[kod].ilosc;
	} while (kod != -1);
		

		
		

}