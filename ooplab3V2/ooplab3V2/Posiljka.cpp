#include"Posiljka.h"
#include "Rukovalac.h"

int Posiljka::ids = 1;

Posiljka& Posiljka::operator+=(Rukovalac* ruk)
{
	if (izracunata) throw GIzrDet();
	listaruk += ruk;
	return *this;
	// TODO: insert return statement here
}

void Posiljka::izrDetalje()
{
	izracunata = true;
	for (int i = 0; i < listaruk.size(); i++) {

		listaruk[i]->Obrada(*this);

	}


}

ostream& operator<<(ostream& os, const Posiljka& p)
{

	os << "Posiljka[" << p.id << ", " << p.art->getNaziv() << "]";
	return os;
	// TODO: insert return statement here
}
