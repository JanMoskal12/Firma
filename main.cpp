#include <iostream>
#include <fstream>
#include "firma.h"

using namespace std;

void zapisz_do_pliku(const list<czlowiek*> &L, const string &nazwa, const firma &f)
{

}

int main()
{
    firma f;

 f.wczytaj("pracownicy.txt", "wspolpracownicy.txt");

 //TEST METODY urodziny
 list<czlowiek*> jubilaci = f.urodziny(5,2);

 // PRZYKLAD FUNKCJI SPOZA KLASY, KTÓRA WYKORZYSTA LISTÊ
 zapisz_do_pliku(jubilaci,"wiadomosci.txt",f);

}
