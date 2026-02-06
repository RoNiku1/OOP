#include "asiakas.h"
#include <iostream>

using namespace std;

asiakas::asiakas()
{
    cout << "Asiakas: olen default konstruktorissa!" << endl;
}

asiakas::asiakas(string name, double lR) : kayttotili(name), luottotili(name, lR)
{
    cout << "Asiakas: olen parametrikonstruktorissa!" << endl;
    nimi = name;
}

bool asiakas::tilisiirto(double sum, asiakas& kohde)
{
    //cout << "Asiakas tilisiirto" << endl;
    double saldo1 = kayttotili.getBalance();

    if ((sum < 0) || (sum > saldo1)){
        return false;
    }

    kayttotili.withdraw(sum);
    kohde.kayttotili.deposit(sum);

    return true;
}

string asiakas::getNimi()
{
    return nimi;
}

void asiakas::showSaldo()
{
    cout << "Kayttotilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool asiakas::talletus(double sum)
{
    return kayttotili.deposit(sum);
}

bool asiakas::nosto(double sum)
{
    return kayttotili.withdraw(sum);
}

bool asiakas::luotonMaksu(double sum)
{
    return luottotili.deposit(sum);
}

bool asiakas::luotonNosto(double sum)
{
    return luottotili.withdraw(sum);
}
