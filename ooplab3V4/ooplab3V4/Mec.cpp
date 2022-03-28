#include "Mec.h"

void Mec::Odigraj()
{
	odigran = true;

	Tim* pob=nullptr, * gub=nullptr;

	if (partimova.getpok1()->getvrednost() > partimova.getpok2()->getvrednost()) {
			ishod = Ishodi::POBEDA_DOMACIN;
			pob = partimova.getpok1();
			gub = partimova.getpok2();
			poenidom = 3;
			//for(int i=0;i<partimova.getpok1()->)
	}
	else if (partimova.getpok1()->getvrednost() == partimova.getpok2()->getvrednost()) {
		ishod = Ishodi::NERESENO;
		poenidom = poenigos = 1;
	}
	else {
		ishod = Ishodi::POBEDA_GOST;
		pob = partimova.getpok2();
		gub = partimova.getpok1();
		poenigos = 3;
	}

	if (pob) {
		for (int i = 0; i < pob->getMaxIgr();i++ ) {

			if ((*pob)[i]) {
				(*pob)[i]->povecajVrednost(10);
				

			}
			

			
		}
		//pob->setvrednost(pob->getvrednost()* pob->trenIgr() * 1.1);
		for (int i = 0;i < gub->getMaxIgr();i++ ) {

			if ((*gub)[i]) {
				(*gub)[i]->smanjiVrednost(10);
				
			}
		}
		//gub->setvrednost(gub->getvrednost()* gub->trenIgr() *0.9);
	}
	parpoena.setpok1(&poenidom);
	parpoena.setpok2(&poenigos);
}

ostream& operator<<(ostream& os, const Mec& m)
{
	os << m.partimova;
	if (m.odigran) {
		switch (m.ishod) {
		case m.Ishodi::NERESENO:
			os << " NERESENO";
			break;
		case m.Ishodi::POBEDA_DOMACIN:
			os << " POBEDA_DOMACIN";
			break;
		case m.Ishodi::POBEDA_GOST:
			os << " POBEDA_GOST";
			break;

		default:
			break;
		}
	}
	return os;
}
