#include "notifikaattori.h"
#include <iostream>
using namespace std;

Notifikaattori::Notifikaattori()
{
    cout << "DEBUG: Notifikaattori default konstruktori" << endl;
}

void Notifikaattori::lisaa(Seuraaja* lisaaSeuraajaPtr)
{
    //cout << "DEBUG: lisaa()" << endl;
    if(lisaaSeuraajaPtr == nullptr)
    {
        cout << "DEBUG: nullptr" << endl;
        return;
    }
    if(seuraajat == nullptr)
    {
        seuraajat = lisaaSeuraajaPtr;
        cout << "Lisätty seuraaja: " << seuraajat->getNimi() << endl;
        return;
    }
    lisaaSeuraajaPtr->next = seuraajat;
    seuraajat = lisaaSeuraajaPtr;
    cout << "Lisätty seuraaja: " << seuraajat->getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja* poistaSeuraajaPtr)
{
    //cout << "DEBUG: poista()" << endl;
    if(poistaSeuraajaPtr == nullptr || seuraajat == nullptr)
    {
        //cout << "DEBUG: nullptr" << endl;
        return;
    }
    if(seuraajat == poistaSeuraajaPtr)
    {
        cout << "Poistetaan seuraaja: " << seuraajat->getNimi() << endl;
        seuraajat = seuraajat->next;
        return;
    }
    Seuraaja* seurTempPrev = seuraajat;
    Seuraaja* seurTempNext = seuraajat->next;
    while(seurTempNext->next != nullptr)
    {
        if(seurTempNext == poistaSeuraajaPtr)
        {
            cout << "Poistetaan seuraaja: " << seurTempNext->getNimi() << endl;
            seurTempPrev->next = seurTempNext->next;
            return;
        }
        seurTempPrev = seurTempNext;
        seurTempNext = seurTempNext->next;
    }
    if(seurTempNext == poistaSeuraajaPtr)
    {
        cout << "Poistetaan seuraaja: " << seurTempNext->getNimi() << endl;
        seurTempPrev->next = nullptr;
        return;
    }
    //cout << "DEBUG: Listasta ei löydetty arvoa." << endl;
    return;
}

void Notifikaattori::tulosta()
{
    //cout << "DEBUG: tulosta()" << endl;
    if(seuraajat == nullptr)
    {
        cout << "Ei seuraajia." << endl;
        return;
    }
    Seuraaja* seurTemp = seuraajat;
    while(seurTemp->next != nullptr)
    {
        cout << seurTemp->getNimi() << endl;
        seurTemp = seurTemp->next;
    }
    cout << seurTemp->getNimi() << endl;
}

void Notifikaattori::postita(string a)
{
    //cout << "DEBUG: postita()" << endl;
    if(seuraajat == nullptr)
    {
        cout << "Ei seuraajia." << endl;
        return;
    }
    Seuraaja* seurTemp = seuraajat;
    while(seurTemp->next != nullptr)
    {
        seurTemp->paivitys(a);
        seurTemp = seurTemp->next;
    }
    seurTemp->paivitys(a);
}
