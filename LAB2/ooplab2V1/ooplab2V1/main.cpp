#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include"cvecara.h"





int main() {

    //Cvet *c1= new Cvet("Ruza", 40, 250);
    //Cvet* c2 = new Cvet("Lala", 50, 300);
    //Cvet* c3 = new Cvet("Ljubicica", 30, 400);
    ///*cout << *c1<< " "<<*c2<<endl;
    //
    //cout << ((*c1)==(*c2))<<endl;
    // 
    //cout << ((*c1)!=(*c2));*/


    //Buket* b1 = new Buket();
    //Buket* b2 = new Buket();
    //b1->dodajCvet(c1);
    //b1->dodajCvet(c2);
    //b1->dodajCvet(c2);

    //b2->dodajCvet(c2);
    //b2->dodajCvet(c3);

    //Buket* b3 = new Buket();
    //
    ////cout << c1 << " " << c2 << endl << c1->zarada()<<endl;
    ////cout << b1->nabCena()<<endl;
    ////cout << b1->prodCena();
    ////cout << endl << (b2 < b1);
    ////cout << endl << b1<<endl;
    ////cout << b2 << endl;
    //b2->dodajCvet(c1);
    ////cout << b2 << endl;
    //b2->dodajCvet(c1);
    ////cout << b2 << endl;
    ////cout << b3;
    //Cvecara* cvec = new Cvecara();
    //b3->dodajCvet(c1);
    //cvec->dodajBuk(b1);
    //cvec->dodajBuk(b2);
    //cvec->dodajBuk(b3);
    //cout << (*cvec);

    //cvec->dodajBuk(b3);
    //cvec->dodajBuk(b2);
    //cout << *cvec;
    //cvec->prodaja(2);
    //cvec->prodaja(3);
    //Cvecara* cvec2 = new Cvecara(*cvec);
    //cout << *cvec<<endl;
    //cout << "2" << endl;
    //cout << *cvec2<<endl;
    //Cvecara* cvec3 = new Cvecara(*cvec);
    //cout << "3" << endl;
    //cout << *cvec3 << endl;
    //cvec2->dodajBuk(b2);
    //cout << "1" << *cvec << endl;
    //cout << "2" << *cvec2 << endl;
    //cvec3 = cvec2;
    //cout <<"3"<< *cvec3;
    //cvec->prodaja(2);
    //cout << "1" << *cvec<<endl;
    //cout << "2" << *cvec2 << endl;

    /*Cvet f1{ "Zumbul", 1500, 1700};
    Cvet f2{ "Ruza", 1000, 1300 };
    Cvet f3{ "Cvet1", 500, 1000 };
    Cvet f4{ "Zuc", 355 , 1200 };
    Cvet f5{ "Meh", 344, 1300 };
    Cvet f6{ "Kek", 800, 1200 };
    Cvet f7{ "Abc", 1100, 1000000 };

    Buket b1;
    Buket b2;
    b1.dodajCvet(&f1);
    b1.dodajCvet(&f2);
    b2.dodajCvet(&f3);
    b2.dodajCvet(&f4);
    b2.dodajCvet(&f5);
    b2.dodajCvet(&f6);
    b2.dodajCvet(&f7);

    Cvecara s1;
    s1.dodajBuk(&b1);
    s1.dodajBuk(&b2);
    cout << s1;*/
    



        /*
    Cvet* c1 = new Cvet("Ruza", 40, 250);
    Cvet* c2 = new Cvet("Lala", 50, 300);
    Cvet* c3 = new Cvet("Ljubicica", 30, 400);
    /*cout << *c1<< " "<<*c2<<endl;

    cout << ((*c1)==(*c2))<<endl;
    cout << ((*c1)!=(*c2));


    Buket* b1 = new Buket();
    Buket* b2 = new Buket();
    b1->dodajCvet(c1);
    b1->dodajCvet(c2);
    b1->dodajCvet(c2);

    b2->dodajCvet(c2);
    b2->dodajCvet(c3);

    Buket* b3 = new Buket();

    //cout << c1 << " " << c2 << endl << c1->zarada()<<endl;
    //cout << b1->nabCena()<<endl;
    //cout << b1->prodCena();
    //cout << endl << (b2 < b1);
    //cout << endl << b1<<endl;
    //cout << b2 << endl;
    b2->dodajCvet(c1);
    //cout << b2 << endl;
    b2->dodajCvet(c1);
    //cout << b2 << endl;
    //cout << b3;
    Cvecara* cvec = new Cvecara();
    b3->dodajCvet(c1);
    cvec->dodajBuk(b1);
    cvec->dodajBuk(b2);
    cvec->dodajBuk(b3);
    cout << (*cvec);

    cvec->dodajBuk(b3);
    cvec->dodajBuk(b2);
    cout << *cvec;
    cvec->prodaja(2);
    cvec->prodaja(3);
    Cvecara* cvec2 = new Cvecara(*cvec);
    cout << *cvec << endl;
    cout << "2" << endl;
    cout << *cvec2 << endl;
    Cvecara* cvec3 = new Cvecara(*cvec);
    cout << "3" << endl;
    cout << *cvec3 << endl;
    cvec2->dodajBuk(b2);
    cout << "1" << *cvec << endl;
    cout << "2" << *cvec2 << endl;
    cvec3 = cvec2;
    cout << "3" << *cvec3;
    cvec->prodaja(2);
    cout << "1" << *cvec << endl;
    cout << "2" << *cvec2 << endl;

    */


    Cvet c1("Ruza", 40, 250);
    Cvet c2("Lala", 50, 300);
    Cvet c3("Ljubicica", 30, 400);


    Buket b1;
    Buket b2;
    Buket b3;

    Cvecara cvec,cvec2,cvec3;
    b1.dodajCvet(&c1);
    b1.dodajCvet(&c2);
    b1.dodajCvet(&c2);

    b2.dodajCvet(&c2);
    b2.dodajCvet(&c3);


 
    b3.dodajCvet(&c1);
    cvec.dodajBuk(&b1);
    cvec.dodajBuk(&b2);
    cvec.dodajBuk(&b3);


    cvec2.dodajBuk(&b3);
    cvec2.dodajBuk(&b3);
    cvec2.dodajBuk(&b2);
    cout <<2<<endl <<cvec2 << endl;

    //Provera kopi konstruktora 
    cvec3 = cvec2;

    cvec2.dodajBuk(&b2);
    cout <<1<<endl<< cvec<<endl;
    cout <<2<<endl<< cvec2 << endl;

    //provera prodaje
    cvec2.prodaja(2);


    cout <<2<<endl<< cvec2<<endl;
    cout <<3<<endl<< cvec3 << endl;


}
