#include <iostream>
#ifndef PESEL_H
#define PESEL_H

using namespace std;

class pesel
{
    public:
        pesel(string numer);
        string operator()() const;
        string getData() const;
        bool getPlec() const;
        void setPesel(string numer);

    private:
       string _numer;
        int rok, miesiac, dzien;

};

#endif // PESEL_H
