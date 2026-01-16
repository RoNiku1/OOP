#include <iostream>
#include "game.h"
using namespace std;

int main()
{
    int maxNumber;

    cout << "Anna suurin luku: " << endl; //Pyydetään käyttäjältä suurin mahdollinen luku.
    cin >> maxNumber;   //Tallennetaan syöte aliohjelmaa varten.

    cout << "DEBUG: maxNum ennen peliolion kutsumista: " << maxNumber << endl;

    Game peliOlio(maxNumber);
    peliOlio.play();

    return 0;
}
