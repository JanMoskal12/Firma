#ifndef WSPOLPRACOWNIK_H
#define WSPOLPRACOWNIK_H

#include <iostream>
#include "czlowiek.h"

using namespace std;

class wspolpracownik : public czlowiek
{
    public:

        wspolpracownik(string imie, string nazwisko, string pesel, string email, int odpowiedzialny);
        int getOpiekun();

    private:

        int _odpowiedzialny;
};

#endif // WSPOLPRACOWNIK_H
