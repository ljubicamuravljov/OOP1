#include "Privilegovani.h"
#include "Par.h"
#include "Mec.h"
#include <iostream>
using namespace std;

int main() {
	try {
		Tim t1(6, "Konjarnik");

		Tim t2(3, "Tim 2");
		Tim t3(3, "Tim 3");

	
		
		
		Privilegovani p1("Stoni Tenis", 4, 2000);

	

		Igrac* ig1 = new Igrac("LJ", 5000);
		Igrac* ig2 = new Igrac("M", 5000);
		Igrac* ig3 = new Igrac("Djolo", 5000);
		Igrac* ig4 = new Igrac("Nigor");
		Igrac* ig5 = new Igrac("Jana");
		Igrac* ig6 = new Igrac("Mima");
		Igrac* ig7 = new Igrac("Mikljaba", 5000);

		cout << *ig1 << endl;


		t1.dodajIgr(ig1, 0);
		t1.dodajIgr(ig2, 1);
		t1.dodajIgr(ig3, 2);
		t1.dodajIgr(ig4, 3);
		t1.dodajIgr(ig5, 4);
		t1.dodajIgr(ig6, 5);

		t2.dodajIgr(ig1, 0);
		t2.dodajIgr(ig2, 1);
		t2.dodajIgr(ig4, 2);



		t3.dodajIgr(ig3, 0);
		t3.dodajIgr(ig5, 1);
		t3.dodajIgr(ig6, 2);

		cout << t1 << endl;

		p1.dodajIgr(ig1, 0);
		p1.dodajIgr(ig2, 1);
		p1.dodajIgr(ig3, 2);
		p1.dodajIgr(ig7, 3);
		
		cout << p1 << endl;

		Par<Igrac> par1(ig1,ig7);
		//Par<Igrac> par2;

		/*par1.setpok1(ig1);
		par1.setpok2(ig7);*/

		Tim t4(t3);
		Privilegovani p2(p1);

		//cout << "Provera t4: \n" << t4<<endl; 
		//cout << t3 << endl;
		//cout << "Provera p2: \n" << p2 << endl;
		//cout << p1 << endl;
		//cout << "-----------------" << endl;

		cout << par1<<endl;

		Mec mec1(&t2,&t3);
		Mec mec2(&t3,&t2);
		Mec mec3(&t2,&t2);


		cout << mec1 << endl;
		cout << mec2 << endl;
		cout << mec3 << endl;

		mec1.Odigraj();
		cout << mec1 << endl;
		mec2.Odigraj();
		cout << mec2 << endl;
		mec3.Odigraj();
		
		
		cout << mec3 << endl;
	//	cout << *mec1.getParPoena().getpok1() << " " << *mec1.getParPoena().getpok2();



		delete(ig1);
		delete(ig2);
		delete(ig3);
		delete(ig4);
		delete(ig5);
		delete(ig6);
		delete(ig7);
		


		//_CrtDumpMemoryLeaks();
	}
	catch (exception e) {
		cout << e.what() << endl;
	}
		_CrtDumpMemoryLeaks();


}