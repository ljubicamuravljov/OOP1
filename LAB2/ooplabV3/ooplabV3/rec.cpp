#define _CRTDBG_MAP_ALLOC
#include "rec.h"


int Rec::operator+()
{
	return rec.size();
}


int Rec::operator~() 
{
	
	int rez = 0;
	for (int i = 0; i < rec.size(); i++) {

		if (provera(i)) rez++;

	}
	return rez;


}
ostream& operator<<(ostream& os, const Rec& r1) {

	os << r1.rec;
	return os;

}
istream& operator>> (istream& is, Rec& r1)
{
	string r, str = "";
	getline(cin,r);
	for (int i = 0; i < r.size(); i++) {
		if (isalpha(r[i])) str += r[i];

	}
	r1.rec = str;
    return is;
}
int Rec::operator()(int n)
{
	if (!~*this) return -1;
	if (n < 0) n += ~*this;
	if (n > (~*this)) return -1;
	int br = 0;

	for (int i = 0; i < rec.size(); i++) {

		if (provera(i)) {
			if (br == n) return i;
			br++;
			
		}


	}



}

bool Rec::provera(int i)
{
	return (sam(rec[i]) || (son(rec[i])&&((i == 0 && !(sam(rec[i + 1]))) || (i == rec.size() - 1 && !(sam(rec[i - 1]))) || ((i != 0 && i != rec.size() - 1) && !(sam(rec[i + 1])) && !(sam(rec[i - 1]))))));
}

bool Rec::operator^(Rec& rec2)
{
	int n1 = ~*this, n2 = ~rec2;
	if (!n1 || !n2) { return false; }
	string r1 = "", r2 = "";
	for (int i = 0; i < rec.size(); i++) {
		r1+=tolower(rec[i]);
	}
	for (int i = 0; i < rec2.rec.size(); i++) {
		r2+=tolower(rec2.rec[i]);
	}
	//if (n1 == 1 && n2 == 1) {
	//	return r1==r2;
	//}
	if (n1 == 1 || n2 == 1) {

		return r1.substr((*this)(-1), r1.size()) == r2.substr(rec2(-1), +rec2);
	}
	else return r1.substr((*this)(-2), r1.size()) == r2.substr(rec2(-2), +rec2);
}
