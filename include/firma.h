#ifndef FIRMA_H
#define FIRMA_H

#include <iostream>
#include <map>
#include <list>
#include "czlowiek.h"
#include <pracownik.h>
#include <wspolpracownik.h>

using namespace std;

class firma
{
    public:

        map<int, pracownik> prac;
        list<wspolpracownik> wspol;
        list<czlowiek*> urodziny(int dzien, int miesiac);
        void wczytaj(const string &, const string &);

};

#endif // FIRMA_H
