#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{

    asiakas pasi("Pasi", 500);
    asiakas teemu("Teemu", 300);

    cout << "Asiakas 1: " << pasi.getNimi() << endl;
    cout << "Asiakas 2: " << teemu.getNimi() << endl;

    cout << "Lähtötilanne:" << endl;
    cout << "Pasi:" << endl;
    pasi.showSaldo();
    cout << "Teemu:" << endl;
    teemu.showSaldo();

    cout << "Talletus:" << endl;
    pasi.talletus(200);
    pasi.showSaldo();

    cout << "Nosto:" << endl;
    pasi.nosto(50);
    pasi.showSaldo();

    cout << "Luoton nosto:" << endl;
    pasi.luotonNosto(100);
    pasi.showSaldo();

    cout << "Luoton maksu" << endl;
    pasi.luotonMaksu(50);
    pasi.showSaldo();


    cout << "Saldot ennen tilisiirtoa:" << endl;
    cout << "Pasi:" << endl;
    pasi.showSaldo();
    cout << "Teemu:" << endl;
    teemu.showSaldo();

    cout << "Tilisiirto Pasilta Teemulle:" << endl;
    pasi.tilisiirto(100, teemu);

    cout << "\n--- Lopputilanne ---" << endl;
    cout << "Pasi:" << endl;
    pasi.showSaldo();
    cout << "Teemu:" << endl;
    teemu.showSaldo();

    return 0;
}
