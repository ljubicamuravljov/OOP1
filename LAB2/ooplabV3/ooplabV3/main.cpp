#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include "rec.h"

Skup Rec::sam("aeiou");
Skup Rec::son("lnr");

int main() {

    {
        

        Rec r1("Ljubica");
        Rec r2("aaaA");
        Rec r6("Aa");
        Rec r7("A");

        cout << (r2 ^ r6);
        cout << (r2 ^ r7);
        cout << (r7 ^ r6) << endl;

        Rec r3("CRv");
        Rec r4("KrV");
        Rec r5("Ruzica");

        cout << (r3 ^ r4);
        cout << (r3 ^ r5);
        cout << (r5 ^ r1) << endl;

       cin >> r4;
        cout << (r3 ^ r4) << endl;

        Rec r9("pRv");
        Rec r10("mtV");
        Rec r11("Tf13f");
        cout << (r9 ^ r10);
        cout << (r9 ^ r3);

        cout << (r10 ^ r11) << endl;

        Rec r12("swqhbs");
        Rec r13("pthbs");
        Rec r14("Ta");
        cout << (r12 ^ r13);
        cout << (r12 ^ r14) << endl;

    }

    _CrtDumpMemoryLeaks();
    return 0;
}