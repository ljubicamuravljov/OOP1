#ifndef _Par_h_
#define _Par_h_


#include <iostream>

using namespace std;

template<typename T>
class Par {

	T* pok1;
	T* pok2;

public:
	Par(T* p1,T* p2):pok1(p1),pok2(p2){}

	void setpok1(T* p) { pok1 = p; }
	void setpok2(T* p) { pok2 = p; }

	T* getpok1()  { return pok1; }
	const T* getpok1() const { return pok1; }

	T* getpok2()  { return pok2; }
	const T* getpok2() const  { return pok2; }

	bool operator==(const Par& p);
	friend ostream& operator<<(ostream& os, const Par& p){
	//os << "Par";
	os << "[" << *p.pok1 << "-" << *p.pok2 << "]";
	return os;

}
};

template<typename T>
inline bool Par<T>::operator==(const Par& p)
{
	
	if (pok1 == nullptr || p.getpok1() == nullptr || pok2 == nullptr || p.getpok2() == nullptr) { return false; }
	return (*pok1==*p.getpok1() && *pok2==*p.getpok2());
	
	
}


#endif // !_Par_h_
