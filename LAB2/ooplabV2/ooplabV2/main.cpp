#include "Biblioteka.h"

int Knjiga::ids = 0;

int main() {

	/*Knjiga* k1 = new Knjiga("Lovac u zitu", "Selindzer");
	Knjiga* k2 = new Knjiga("Stranac", "Kami");
	cout << k1 << endl << k2;

	Knjiga* k3;
	k3 = !(*k2);
	cout <<endl<<k3<<endl;
	Biblioteka bib1("Svetozara Mark",250);
	cout << bib1;
	bib1 += *k1;
	bib1 += *k2;
	cout << bib1;
	cout << endl;

	cout << bib1.dohvatiKnjigu(1)<<endl;
	cout << bib1.dohvatiKnjigu(3);
	Biblioteka bib2(bib1);
	cout <<endl<< bib2;

	cout << endl;

	Biblioteka b3;
	b3 = bib2;
	cout << b3;
	bib1 +=  *new Knjiga("sTa", "plasimse");
	cout << bib1<<endl;
	Biblioteka b4;
	b4 = Biblioteka("Ime", 35);
	cout << b4;*/
	
		Knjiga k1("Lovac u zitu", "Selindzer");
		Knjiga k2("Stranac", "Kami");

		Biblioteka bib1("Svetozara Mark", 250);
		bib1 += k1;
		bib1 += k2;

		cout << bib1 << endl;
		Biblioteka bib2(bib1);
		bib1 +=  Knjiga("Knjiga&&", "Nema");
		
		cout << bib1 << endl;
		cout << bib2 << endl;


		Biblioteka b3;
		b3 = bib2;

		cout << b3 << endl;
	
		bib2.pozajmi(4, Datum(3, 5, 2021));
		cout << bib2;

		Pozajmica p(&k2, Datum(3, 2, 2020));

		ListaP lista;
		lista += p;
		cout <<endl<< p<<endl;
		cout << lista;

		
}