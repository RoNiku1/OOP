#include "italianchef.h"
#include <iostream>
#include <string.h>

using namespace std;

ItalianChef::ItalianChef()
{
    cout << "DEBUG: ItalianChef olio luotu, default konstruktori." << endl;
}

ItalianChef::ItalianChef(string cN)
{
    cout << "DEBUG: ItalianChef olio luotu, annettu parametri: " << cN << endl;
    chefName = cN;
    cout << "DEBUG: chefName: " << chefName << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "DEBUG: ItalianChef olio tuhottu, default destruktori." << endl;
}

bool ItalianChef::askSecret(string pw, int flours, int waters)
{
    cout << "DEBUG: Salaisuus funktio." << endl;

    /*Jäsenfunktio askSecret() tarkistaa onko parametrinä annettu salasana ok,
     * jos on, kutsuu makePizza()-jäsenfunktiota.
     * Muut parametrit ovat ainesten eli jauhojen (flour) ja veden (water) määrä.
     * Funktio palauttaa true/false sen mukaan oliko salasana oikea.
    */

    int vertaa = pw.compare(password);

    if(vertaa != 0){
        cout << "Virheellinen salasana." << endl;
        return false;
    }

    cout << "Oikea salasana!" << endl;
    water = waters;
    flour = flours;
    makePizza();

    return true;
}

int ItalianChef::makePizza()
{
    int numberOfPizzas;
    cout << "DEBUG: Pizza funktio." << endl;
    cout << "DEBUG: Flour: " << flour << " Water: " << water << endl;
    int availableFlour = flour/5;
    int availableWater = water/5;
    cout << "DEBUG: Available flour: " << availableFlour << " Available water: " << availableWater << endl;
    numberOfPizzas = min(availableFlour, availableWater);
    cout << "DEBUG: numberOfPizzas: " << numberOfPizzas << endl;
    cout << "Kokki tekee " << numberOfPizzas << " pizzaa." << endl;

    return numberOfPizzas;
}
/* public:
    ItalianChef();
    ~ItalianChef();
    bool askSecret(string, int, int);
private:
    string password = "pizza";
    int flour;
    int water;
    int makePizza();
protected:
};*/
