#pragma once
#include <iostream>
#include "magazyn.h"
using namespace std;


void stan() {
	system("cls");
	cout << "Podaj kod produktu, kt�ry chcesz sprawdzi� [-1 spowoduje wyj�cie do menu g��wnego]" << endl;
	int kod{};
	do {
		cin >> kod;
		if (kod <= 100 && kod >=-1) {
			cout << "Nazwa: " << p[kod].nazwa << endl;
			cout << "Stan na magazynie: " << p[kod].ilosc << endl;
			cout << "Cena: " << p[kod].cena << endl;
		}
		else {
			cout << "Podano nieprawid�ow� warto��"<<endl;
		}
	} while (kod != -1);
}
