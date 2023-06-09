#include <iostream>
#include <fstream>
#include "include/firma.h"
#include "include/pracownik.h"
#include "include/pesel.h"
#include "include/czlowiek.h"
#include "include/wspolpracownik.h"
#include <fstream>

using namespace std;

void zapisz_do_pliku(const list<czlowiek*> &L, const string &nazwa, const firma &f)
{
   
   ofstream plik(nazwa, std::ofstream::out);

   if (plik.is_open())
   {

      for (auto x:L)
      {
      pesel p(x->getPesel());

         plik <<  x->getEmail() << "    " << p.getData() << " \n ";
      }


   }

   plik.close();

}

int main()
{
    firma f;

 f.wczytaj("pracownicy.txt", "wspolpracownicy.txt");

 //TEST METODY urodziny
 list<czlowiek*> jubilaci = f.urodziny(5,2);

 // PRZYKLAD FUNKCJI SPOZA KLASY, KTóRA WYKORZYSTA LISTĘ
 zapisz_do_pliku(jubilaci,"wiadomosci.txt",f);

}
