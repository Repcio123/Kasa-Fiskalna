#pragma once
#include <iostream>
#include "magazyn.h"
using namespace std;
void dostawa() {
	system("cls");
	int ilosc{};
	
	int kod{};
		while (true) {
			cout << "Podaj kod otrzymanego produktu (-1 oznacza wyj�cie z funkcji): ";
			cin >> kod;
			if (kod == -1) { break; }
			while (kod < 0 || kod > 10) { cout << "Podano kod poza zakresem. Wprowad� jeszcze raz. "; cin >> kod; }
			cout << endl << "Otrzymano: " << p[kod].nazwa << ", wprowad� ilo�� otrzymanego produktu ";
			cin >> ilosc;
			p[kod].ilosc += ilosc;
		}
	
}