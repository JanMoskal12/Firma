#include "firma.h"
#include <fstream>
#include <sstream>
#include <string>
#include "pesel.h"


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

    prac.insert({id,p});
    


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



 





}


list<czlowiek*> firma :: urodziny(int dzien, int miesiac)
{

    string _pesel;
    int _dzien;
    int _miesiac;

    list<czlowiek*> lista;

  for (auto x:prac)
  {
    
   pesel peselel(x.second.getPesel());

   if (peselel.getData() != "")
   {
    
     _miesiac = stoi(_pesel.substr(5,2));

     _dzien = stoi(_pesel.substr(8,2));


     if (_miesiac == miesiac && _dzien == dzien)
     {
          lista.push_back(&x.second);
     }
   }
  }
  return lista;

}