
#include "Vozilo.h"

int main() {
	try {
		Put put;

		put += Tacka(0, 0);
		put += Tacka(1, 0);
		put += Tacka(2, 0);
		put += Tacka(3, 0);

		cout << put.duzina() << endl;
		cout << put;
		
		//obicnoVozilo puntic("Pegaz");
		//cout << puntic << endl;
		//cout << puntic.cena(put);
	}
	catch (exception e) {
		cout << e.what()<<endl;
	}

	return 0;
}