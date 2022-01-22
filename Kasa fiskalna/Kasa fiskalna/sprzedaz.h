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
	cout << "Czy chcesz zapisaæ rachunek? [1 - tak / 0 - nie]" << endl;

	cin >> czyZapisac;
	while (czyZapisac != 0 && czyZapisac != 1) {
		cout << "Niestety nie umiesz podaæ dobrej wartoœci. Spróbuj jeszcze raz!" << endl;
		cin >> czyZapisac;
	}
	if (czyZapisac) // zapisujemy paragon w pliku tekstowym
	{
		fstream paragon;
		paragon.open("paragon.txt", ios::out);
		cout << "Podaj kod [-1 spowoduje zakoñczenie sprzeda¿y]" << endl;
		do {
			cin >> kod;
			cout << p[kod].nazwa << " " << p[kod].cena << " z³" << endl;
			p[kod].ilosc - 1;
			paragon << p[kod].nazwa << " " << p[kod].cena << " z³" << endl;
			suma += p[kod].cena;

		} while (kod != -1);
		cout << "Do zap³aty: " << suma << " z³." << endl;
		paragon << "Do zap³aty: " << suma << " z³." << endl;
		cout << "Wybierz rodzaj p³atnoœci: 0 - karta, 1 - gotówka " << endl;
		cin >> czyGotowka;
		while (czyGotowka != 0 && czyGotowka != 1) { cout << "Wprowadzono nieprawid³ow¹ wartoœæ."; cin >> czyGotowka; }
		if (czyGotowka) {
			cout << "P³atnoœæ gotówk¹" << endl;
			paragon << "P³atnoœæ gotówk¹" << endl;
			cout << "WprowadŸ otrzyman¹ kwotê: "; cin >> zaplata;
			while (zaplata < suma) { cout << "Zbyt ma³a kwota zap³acona!"; cin >> zaplata; }
			paragon << "Otrzymano: " << zaplata << " z³" << endl;
			cout << endl << "Reszta: " << zaplata - suma << " z³" << endl;
			paragon << endl << "Reszta: " << zaplata - suma << " z³" << endl;
			system("pause");
		}
		else {
			cout << "P³atnoœæ kart¹" << endl;
			paragon << "P³atnoœæ kart¹" << endl;
			cout << "Proszê postêpowaæ zgodnie z instrukcjami na terminalu" << endl;
			system("pause");
		}
		paragon.close();
	}
	else {
		cout << "Podaj kod [-1 spowoduje zakoñczenie sprzeda¿y]" << endl;
		do {
			cin >> kod;
			cout << p[kod].nazwa << " " << p[kod].cena << " z³" << endl;
			p[kod].ilosc - 1;
			suma += p[kod].cena;

		} while (kod != -1);
		cout << "Do zap³aty: " << suma << " z³." << endl;
		cout << "Wybierz rodzaj p³atnoœci: 0 - karta, 1 - gotówka " << endl;
		cin >> czyGotowka;
		while (czyGotowka != 0 && czyGotowka != 1) { cout << "Wprowadzono nieprawid³ow¹ wartoœæ."; cin >> czyGotowka; }
		if (czyGotowka) {
			cout << "P³atnoœæ gotówk¹" << endl;
			cout << "WprowadŸ otrzyman¹ kwotê: "; cin >> zaplata;
			while (zaplata < suma) { cout << "Zbyt ma³a kwota zap³acona!"; cin >> zaplata; }
			cout << endl << "Reszta: " << zaplata - suma << " z³" << endl;
			system("pause");
		}
		else {
			cout << "P³atnoœæ kart¹" << endl;
			cout << "Proszê postêpowaæ zgodnie z instrukcjami na terminalu" << endl;
			system("pause");
		}
	}
}
