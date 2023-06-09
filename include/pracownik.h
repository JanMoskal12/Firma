#ifndef PRACOWNIK_H
#define PRACOWNIK_H

#include <iostream>
#include "czlowiek.h"

using namespace std;

class pracownik : public czlowiek
{

    public:

            pracownik(string imie, string nazwisko, string pesel, string email, int id, string dataUmowy, int id_szefa);
        int getID();
        string getDataUmowy();
        int getOpiekun();

    private:

        int _id, _id_szefa;
        string _dataUmowy;

};

#endif // PRACOWNIK_H
