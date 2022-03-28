#include"EmessText.h"
#include"timeStamp.h"
#include"User.h"
#include"List.h"
#include <iostream>
using namespace std;

int main() {
	{
		try {
			User* pos, * prim;
			pos = new User("LJ", "adrlj");
			prim = new User("K", "adrk");
			EmessText poruka(pos, prim, "Titleee");

			List<User*> listausera;
			poruka.addText("Tekst poruke.");

			cout << poruka<<endl;
			poruka.sendMess();
			
	/*		listausera.add(pos);
			listausera.add(prim);
			listausera.toFirst();
			cout << *listausera.getEl()<<endl;
			listausera.toNext();
			cout << *listausera.getEl()<<endl;
			listausera.toNext();
			cout << *listausera.getEl()<<endl;*/
			//poruka.addText("Da l ce da radi");
			//cout << poruka;
			delete(pos);
			delete(prim);
		}
		catch (exception e) {
			cout << e.what() << endl;
		}
	}
	_CrtDumpMemoryLeaks();
	return 0;
}