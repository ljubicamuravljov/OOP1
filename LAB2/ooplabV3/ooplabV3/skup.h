#define _CRTDBG_MAP_ALLOC
#ifndef _skup_h_
#define _skup_h_
#include<iostream>
#include<string>
using namespace std;



class Skup {

	string skup;



public:
	Skup(const string& rec) {

		skup = "";
		for (int i = 0; i < rec.size(); i++) {
			if (skup.find(tolower(rec[i]))==-1) skup += tolower(rec[i]);
		}

	}
	Skup& operator+=(char c);

	bool operator()(char c);
	Skup(const Skup& s) = delete;
	Skup& operator=(const Skup& s) = delete;

};



#endif