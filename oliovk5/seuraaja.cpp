#include "seuraaja.h"
#include <iostream>

Seuraaja::Seuraaja()
{
    cout << "DEBUG: Seuraaja default konstruktori" << endl;
}

Seuraaja::Seuraaja(string a)
{
    cout << "DEBUG: Seuraaja konstruktori käyttää parametriä: " << a << endl;
    nimi = a;
    //cout << "DEBUG: nimi = " << nimi << endl;
}

string Seuraaja::getNimi()
{
    //cout << "DEBUG: getNimi()" << endl;
    return nimi;
}

void Seuraaja::paivitys(string a)
{
    //cout << "DEBUG: paivitys()" << endl;
    cout << a << endl;
}
