#include <iostream>
#include <string.h>
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki("Lars");
    kokki.makeSalad(5);
    kokki.makeSoup(5);
    ItalianChef it_kokki("Lers");
    string italianKokinNimi;
    italianKokinNimi = it_kokki.getName();
    cout << "Italian kokin nimi on: " << italianKokinNimi << endl;
    it_kokki.makeSalad(1);
    it_kokki.askSecret("pitsa",5,5);
    it_kokki.askSecret("pizza",10,7);
    return 0;
}
