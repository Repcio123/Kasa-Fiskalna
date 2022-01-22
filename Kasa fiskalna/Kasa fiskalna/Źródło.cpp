#include <iostream>
#include "sprzedaz.h"
#include "dostawa.h"
#include "stan.h"
#include "magazyn.h"
using namespace std;





int main() {
    setlocale(LC_ALL, "polish"); //kodowanie polskich znaków

	
		int opcja{};
		
		do  {
			system("cls");
			cout << endl;
			cout << "Witaj sprzedawco!" << endl;
			cout << "Z której opcji chcesz skorzystaæ? " << endl;
			cout << "=========================================" << endl;
			cout << "1. Tryb sprzeda¿y" << endl << "2. Tryb dostawy" << endl << "3. Stan magazynu" << endl << "4. Zakoñcz" << endl;
			cin >> opcja;
			switch (opcja) {
			case 1:
				sprzedaz();
				continue;
			//	break;
			case 2:
				dostawa();
				continue;
				//break;
			case 3:
				stan();
				continue;
			//	break;
			case 4:
				break;
			default:
				cout << "Podano z³¹ wartoœæ. Spróbuj jeszcze raz"<<endl;
				break;
			}
		} while (opcja != 4);
	return 0;
}