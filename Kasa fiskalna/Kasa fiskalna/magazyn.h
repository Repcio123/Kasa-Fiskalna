#pragma once
#include <iostream>

using namespace std;

extern struct Produkt {
	int kod;
	string nazwa;
	int ilosc;
	float cena;
};





	extern Produkt p[1024] = { 
		{0, "Cocacola", 56, 6.99},
		{1, "Chipsy Lays", 49, 4.99},
		{2, "Czekolada Milka", 34, 5.99 },
		{3, "Kawa Lavazza", 12, 15.99},
		{4, "Lody Big Milk", 15, 3.99},
		{5, "Sok Tymbark", 34, 4.29},
		{6, "¯elki Harribo", 23, 2.89},
		{7, "Cukierki Wawel paczka", 37, 8.99},
		{8, "Makaron Lubella paczka", 29, 4.59},
		{9, "Bu³ka kajzerka", 58, 0.89},
		{10, "Pomidorki koktajlowe", 34, 4.99} };

	


