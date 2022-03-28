#include "Prodavac.h"

int main() {
	{
		try {
			Artikal* a1 = new Artikal("gumene bombone", 101, 100);
			Artikal* a2 = new Artikal("Cokolada", 110, 200);
			Prodavac* p1 = new Prodavac("LJ");
			Prodavac* p2 = new Prodavac("M");
			p1->dodajUkat(a1, 2, 3);
			p2->dodajUkat(a1, 1.3, 2);
			p1->dodajUkat(a2, 1.2, 4);

			Posiljka po1(a1);
			Posiljka po2(a2);

			cout << po1 << endl;
			cout << po2 << endl;

			po1 += p1;
			po1 += p2;
			po2 += p2;
			po2 += p1;

			cout << po1 << endl;

	/*		cout << "\nDetalji:";
			cout << po1.getDetalji().cena<<" ";
			cout << po1.getDetalji().danicekanja;*/

			cout << po2 << endl;

			/*	cout << "\nDetalji:";
				cout << po2.getDetalji().cena << " ";
				cout << po2.getDetalji().danicekanja;*/

			po1.izrDetalje();
			po2.izrDetalje();

			cout << po1 << endl;

			cout << "Detalji:";
			cout << po1.getDetalji().cena << " ";
			cout << po1.getDetalji().danicekanja << endl;


			cout << po2 << endl;


			cout << "Detalji:";
			cout << po2.getDetalji().cena << " ";
			cout << po2.getDetalji().danicekanja << endl;


			Posiljka po3(po1);

			cout << po3 << endl;

			po3 = po2;
			cout << po3;
			cout << "Detalji:";
			cout << po3.getDetalji().cena << " ";
			cout << po3.getDetalji().danicekanja << endl;

			delete(a1);
			delete(a2);
			delete(p2);
			delete(p1);
		

		}
		catch (exception e) {
			cout << e.what() << endl;
		}
	}
	_CrtDumpMemoryLeaks();


}