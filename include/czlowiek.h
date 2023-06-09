#ifndef CZLOWIEK_H
#define CZLOWIEK_H

#include <iostream>

using namespace std;

class czlowiek
{
    public:
        czlowiek(string imie, string nazwisko, string pesel, string email);
        string getImie();
        string getNazwisko();
        string getPesel();
        string getEmail();

        virtual int getOpiekun() = 0;

    private:
        string _imie, _nazwisko, _email;
        pesel _pesel;

};

#endif // CZLOWIEK_H
