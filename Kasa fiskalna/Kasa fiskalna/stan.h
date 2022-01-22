#pragma once
#include <iostream>
#include "magazyn.h"
using namespace std;


void stan() {
	system("cls");
	cout << "Podaj kod produktu, który chcesz sprawdziæ [-1 spowoduje wyjœcie do menu g³ównego]" << endl;
	int kod{};
	do {
		cin >> kod;
		if (kod <= sizeof(p)) {
			cout << "Nazwa: " << p[kod].nazwa << endl;
			cout << "Stan na magazynie: " << p[kod].ilosc << endl;
			cout << "Cena: " << p[kod].cena << endl;
		}
		else {
			cout << "Podano nieprawid³ow¹ wartoœæ";
		}
	} while (kod != -1);
}
