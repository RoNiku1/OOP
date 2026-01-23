#include "chef.h"
#include <iostream>

Chef::Chef()
{
    cout << "DEBUG: Chef olio luotu, default konstruktori" << endl;
}

Chef::Chef(string cN)
{
    cout << "DEBUG: Chef olio luotu, käyttäen parametria: " << cN <<endl;
    chefName = cN;
    cout << "DEBUG: chefName = " << chefName << endl;
}

Chef::~Chef()
{
    cout << "DEBUG: Olio tuhottu." << endl;
}

string Chef::getName()
{
    cout << "DEBUG: getName funktio" << endl;
    cout << "Kokin nimi on: " << chefName << endl;
    return chefName;
}

void Chef::setName(string cN)
{
    cout << "DEBUG: setName funktio, syötetty arvo: " << cN << endl;
    chefName = cN;
    cout << "DEBUG: chefName = " << chefName << endl;
}

int Chef::makeSalad(int incredients)
{
    /*Jäsenfunktioissa makeSalad() ja makeSoup() annetaan parametrinä ainesten määrä.
    * Funktiot palauttavat annosten määrän.
    Salaatti: yhteen annokseen tarvitaan 5 ainesta
    Keitto: yhteen annokseen tarvitaan 3 ainesta  */

    int portions = incredients/5;
    cout << "DEBUG: Salaatti funktio, syötetty arvo: " << incredients << " palautetaan: " << portions << " annosta" << endl;
    return portions;
}

int Chef::makeSoup(int incredients)
{
    int portions = incredients/3;
    cout << "DEBUG: Keitto funktio, syötetty arvo: " << incredients << " palautetaan: " << portions << " annosta" << endl;
    return portions;
}

