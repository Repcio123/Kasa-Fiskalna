#include <iostream>
#include "sprzedaz.h"
#include "dostawa.h"
#include "stan.h"
#include "magazyn.h"
using namespace std;





int main() {
    setlocale(LC_ALL, "polish"); //kodowanie polskich znak�w

	
		int opcja{};
		
		do  {
			system("cls");
			cout << endl;
			cout << "Witaj sprzedawco!" << endl;
			cout << "Z kt�rej opcji chcesz skorzysta�? " << endl;
			cout << "=========================================" << endl;
			cout << "1. Tryb sprzeda�y" << endl << "2. Tryb dostawy" << endl << "3. Stan magazynu" << endl << "4. Zako�cz" << endl;
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
				cout << "Podano z�� warto��. Spr�buj jeszcze raz"<<endl;
				break;
			}
		} while (opcja != 4);
	return 0;
}