#include <iostream>
#include "sprzedaz.h"
#include "dostawa.h"
#include "stan.h"
#include "magazyn.h"
using namespace std;





int main() {
    setlocale(LC_ALL, "polish"); //kodowanie polskich znaków
	for (int i = 11; i < 100; i++) { //puste miejsca na produkty
		p[i].kod = i;
		p[i].cena = 0;
		p[i].ilosc = 0;
		p[i].nazwa = "Brak produktu";
	} 
	
		int opcja{};
		
		do  {
			system("cls");
			cout << endl;
			cout << "Witaj sprzedawco!" << endl;
			cout << "Z której opcji chcesz skorzystaæ? " << endl<<endl;
			cout << endl;
			cout << "1. Tryb sprzeda¿y" << endl <<endl<< "2. Tryb dostawy" << endl<<endl << "3. Stan magazynu" << endl<<endl << "4. Dodaj produkt" << endl<<endl<< "5. Zakoñcz" << endl;
			cin >> opcja;
			switch (opcja) {
			case 1:
				sprzedaz();
				continue;
			
			case 2:
				dostawa();
				continue;
				
			case 3:
				stan();
				continue;
			
			case 4:
				nowy();
				continue;
			case 5:
				break;
				
			default:
				cout << "Podano z³¹ wartoœæ. Spróbuj jeszcze raz"<<endl;
				break;
			}
		} while (opcja != 5);
		
	return 0;
}