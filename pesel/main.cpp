#include <iostream>
#include <vector>
#include "pesel.h"

using namespace std;

string raport(const pesel & p)
{
	return "numer=" + p() + " data: " + p.getData() +
		" plec: " + (p.getPlec()?"M":"K");
}

int main()
{
    vector<string> dane =
        {
        "1111", "9803b433321",
        "98030413240", "95022913425", "92022913455", "92022913462",
        "98830413244", "95822913429", "92822913459", "92822913466",
        "08230413245", "05222913420", "04222913423", "08230413246"
        };

	for (auto s: dane)
        {
		pesel p{s};
		cout << "dla ciagu " << s << ": " << raport(p) << "\n";
        }

    const pesel staly{"98030413240"};
	cout << "Jeszcze raz, " << raport(staly) << "\n";
        pesel x("98030413240");
        x.setPesel("04222913423");
        cout << "setPesel(): " << raport(x) << "\n";
        x.setPesel("04222913430");
        cout << "setPesel(): " << raport(x);
}
