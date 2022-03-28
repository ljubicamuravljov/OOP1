#include "knjiga.h"



ostream& operator<<(ostream& os, Knjiga* k)
{
    if (!k) return os;
    os << "KNJIGA " << k->id << " : " << k->naziv << "-" << k->autor;
    return os;
}
Knjiga* operator!(const Knjiga& k1) {
    Knjiga* k2 = new Knjiga(k1.naziv, k1.autor);
    return k2;


}