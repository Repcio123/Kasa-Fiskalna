#pragma once
#include <iostream>
#include <fstream>
#include "magazyn.h"
using namespace std;
void sprzedaz() {
	system("cls");
	int kod{};
	bool czyZapisac{};
	float suma{};
	float zaplata{};
	bool czyGotowka{};
	cout << "Czy chcesz zapisa� rachunek? [1 - tak / 0 - nie]" << endl;

	cin >> czyZapisac;
	while (czyZapisac != 0 && czyZapisac != 1) {
		cout << "Niestety nie umiesz poda� dobrej warto�ci. Spr�buj jeszcze raz!" << endl;
		cin >> czyZapisac;
	}
	if (czyZapisac) // zapisujemy paragon w pliku tekstowym
	{
		fstream paragon;
		paragon.open("paragon.txt", ios::out);
		cout << "Podaj kod [-1 spowoduje zako�czenie sprzeda�y]" << endl;
		do {
			cin >> kod;
			cout << p[kod].nazwa << " " << p[kod].cena << " z�" << endl;
			p[kod].ilosc - 1;
			paragon << p[kod].nazwa << " " << p[kod].cena << " z�" << endl;
			suma += p[kod].cena;

		} while (kod != -1);
		cout << "Do zap�aty: " << suma << " z�." << endl;
		paragon << "Do zap�aty: " << suma << " z�." << endl;
		cout << "Wybierz rodzaj p�atno�ci: 0 - karta, 1 - got�wka " << endl;
		cin >> czyGotowka;
		while (czyGotowka != 0 && czyGotowka != 1) { cout << "Wprowadzono nieprawid�ow� warto��."; cin >> czyGotowka; }
		if (czyGotowka) {
			cout << "P�atno�� got�wk�" << endl;
			paragon << "P�atno�� got�wk�" << endl;
			cout << "Wprowad� otrzyman� kwot�: "; cin >> zaplata;
			while (zaplata < suma) { cout << "Zbyt ma�a kwota zap�acona!"; cin >> zaplata; }
			paragon << "Otrzymano: " << zaplata << " z�" << endl;
			cout << endl << "Reszta: " << zaplata - suma << " z�" << endl;
			paragon << endl << "Reszta: " << zaplata - suma << " z�" << endl;
			system("pause");
		}
		else {
			cout << "P�atno�� kart�" << endl;
			paragon << "P�atno�� kart�" << endl;
			cout << "Prosz� post�powa� zgodnie z instrukcjami na terminalu" << endl;
			system("pause");
		}
		paragon.close();
	}
	else {
		cout << "Podaj kod [-1 spowoduje zako�czenie sprzeda�y]" << endl;
		do {
			cin >> kod;
			cout << p[kod].nazwa << " " << p[kod].cena << " z�" << endl;
			p[kod].ilosc - 1;
			suma += p[kod].cena;

		} while (kod != -1);
		cout << "Do zap�aty: " << suma << " z�." << endl;
		cout << "Wybierz rodzaj p�atno�ci: 0 - karta, 1 - got�wka " << endl;
		cin >> czyGotowka;
		while (czyGotowka != 0 && czyGotowka != 1) { cout << "Wprowadzono nieprawid�ow� warto��."; cin >> czyGotowka; }
		if (czyGotowka) {
			cout << "P�atno�� got�wk�" << endl;
			cout << "Wprowad� otrzyman� kwot�: "; cin >> zaplata;
			while (zaplata < suma) { cout << "Zbyt ma�a kwota zap�acona!"; cin >> zaplata; }
			cout << endl << "Reszta: " << zaplata - suma << " z�" << endl;
			system("pause");
		}
		else {
			cout << "P�atno�� kart�" << endl;
			cout << "Prosz� post�powa� zgodnie z instrukcjami na terminalu" << endl;
			system("pause");
		}
	}
}
