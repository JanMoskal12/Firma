#include "firma.h"
#include <fstream>
#include <sstream>


void firma :: wczytaj(const string &plik1, const string &plik2)
{

 ifstream plik;

 plik.open(plik1);

 string linia; 

 getline(plik,linia);

 while (getline(plik,linia))
 {
    stringstream ss(linia);

    int id;
    int id_Szefa;

    ss>>id;

    string imie,nazwisko,pesel,email,umowa;

    ss>>imie;
    ss>>nazwisko;
    ss>>pesel;
    ss>>email;
    ss>>umowa; 
    ss>>id_Szefa;  // STOI

    pracownik p(imie,nazwisko,pesel,email,id,umowa,id_Szefa);

    prac[id] = p;
    


 }
 plik.close();

 plik.open(plik2);

 plik>>linia;

 while(getline(plik,linia))
 {
 
   string imie,nazwisko,pesel,email;
   int odpowiedzialny;

   plik>>imie;
   plik>>nazwisko;
   plik>>pesel;
   plik>>email;
   plik>>odpowiedzialny;

   wspolpracownik wspolprac(imie,nazwisko,pesel,email,odpowiedzialny);

   wspol.push_back(wspolprac); // ?




 }

 plik.close();

 




 plik.close();



}
