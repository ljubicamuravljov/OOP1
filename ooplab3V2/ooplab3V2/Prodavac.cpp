#include "Prodavac.h"
void Prodavac::Obrada(Posiljka& p) const 
{
	for (int i = 0; i < katalog.size(); i++) {
		if (katalog[i].art == p.art) {
			p.detalji.danicekanja += katalog[i].dani;
			p.detalji.cena += katalog[i].marza * p.art->getNCena();
			return;
		}
	}
}

void Prodavac::dodajUkat(Artikal* a, double m, int d)
{
	//Trojka* nova = new Trojka(a, m, d);

	katalog+=Trojka(a,m,d);


}
