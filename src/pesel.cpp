 #include "pesel.h"

pesel :: pesel(string numer)
{
     _numer= "";
       if (numer.length() != 11)
            return;
    for(int i = 0; i < numer.length(); i++)
        {
            if(numer[i] < '0' || numer[i] > '9')
                return;
        }

    int rok2 = stoi(numer.substr(0, 2));
    int rok1 = stoi(numer.substr(2, 2));
    miesiac = rok1 % 20;
    dzien = stoi(numer.substr(4, 2));
    int k = rok1 / 20;


if(k == 4)
rok = 1800 + rok2;
    else
    {
     rok = 1900 + k * 100+rok2;
    }

 switch(miesiac)
 {
 case 1:
 case 3:
 case 5:
 case 7:
 case 8:
 case 10:
 case 12:
    if(dzien > 31)
    return;
    break;
case 4:
case 6:
case 9:
case 11:
    if (dzien > 30)
    return;
    break;
case 2:
    if((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0)
        {
        if (dzien>29)
            return;
        } else
        {
        if (dzien>28)
            return;
        }
 }
 int mnozniki[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1};
 int suma = 0;
for(int i = 0; i < 11; i++)
 {
suma += mnozniki[i] * numer[i];
 }
if(suma % 10 != 0)
{
 return;
}

    _numer = numer;

}


string pesel :: getData() const
{
string _rok, _miesiac, _dzien;
if(_numer == "")
    return "";
else
    {
    _rok = to_string(rok);
    _miesiac = (miesiac < 10)? "0" + to_string(miesiac) : to_string(miesiac);
    _dzien = (dzien < 10)? "0" + to_string(dzien) : to_string(dzien) ;
    return _rok + "-" + _miesiac + "-" + _dzien;
    }
}


string pesel :: operator()() const
{
return _numer;
}


bool pesel :: getPlec() const
{
 if(_numer[9] % 2 == 1)
 return true;
    else
    return false;
}
void pesel:: setPesel(string numer)
{
 _numer= "";
       if (numer.length() != 11)
            return;
    for(int i = 0; i < numer.length(); i++)
        {
            if(numer[i] < '0' || numer[i] > '9')
                return;
        }

    int rok2 = stoi(numer.substr(0, 2));
    int rok1 = stoi(numer.substr(2, 2));
    miesiac = rok1 % 20;
    dzien = stoi(numer.substr(4, 2));
    int k = rok1 / 20;


if(k == 4)
rok = 1800 + rok2;
    else
    {
     rok = 1900 + k * 100+rok2;
    }

 switch(miesiac)
 {
 case 1:
 case 3:
 case 5:
 case 7:
 case 8:
 case 10:
 case 12:
    if(dzien > 31)
    return;
    break;
case 4:
case 6:
case 9:
case 11:
    if (dzien > 30)
    return;
    break;
case 2:
    if((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0)
        {
        if (dzien>29)
            return;
        } else
        {
        if (dzien>28)
            return;
        }
 }
 int mnozniki[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1};
 int suma = 0;
for(int i = 0; i < 11; i++)
 {
suma += mnozniki[i] * numer[i];
 }
if(suma % 10 != 0)
{
 return;
}

    _numer = numer;
}
