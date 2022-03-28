#ifndef _Rukovalac_h_
#define _Rukovalac_h_
#include "Posiljka.h"

class Rukovalac {


public:
	virtual ~Rukovalac(){}
	virtual void Obrada(Posiljka& p) const =0;//???????????

};

#endif // !_Rukovalac_h_
