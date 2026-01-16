#include "game.h"
#include <iostream>
#include <ctime>
using namespace std;

Game::Game(int mN)
{
    cout << "DEBUG: Olio luotu." << endl;
    cout << "DEBUG: " << maxNum << endl;
    maxNum = mN;    //Tallennetaan käyttäjän antama maximi luku maxNum muuttujaan.
    cout << "DEBUG: maxNum on: " << maxNum << endl;

}

Game::~Game()
{
    cout << "DEBUG: Olio tuhottu." << endl;
}

void Game::play()
{
    cout << "DEBUG: play" << endl;
    //Arvotaan satunnaisluku:
    srand(time(NULL));
    randomNumber = (rand() % maxNum) + 1;
    cout << "DEBUG: Satunnaisluku on: " << randomNumber << endl;

    //Pelilogiikka:
    while (playerGuess != randomNumber)
    {

        cout << "Anna arvaus: " << endl; //Pyydetään käyttäjältä arvaus.
        cin >> playerGuess; //Tallennetaan syöte.
        numOfGuesses++; //Lisätään arvauskerta.

        if(playerGuess == randomNumber) //Jos arvaus on oikein:
        {
            cout << "Oikein! " << endl;
        }
        else if (playerGuess < randomNumber) //Jos arvaus on pienempi kuin satunnaisluku.
        {
            cout << "Luku on suurempi! " << endl;
        }
        else if (playerGuess > randomNumber)    //Jos arvaus on suurempi kuin satunnaisluku.
        {
            cout << "Luku on pienempi! " << endl;
        }
    }

    printGameResult();  //Kutsutaan printGameResult funktio, joka tulostaa arvausten määrän.

}

void Game::printGameResult()
{
    cout << "DEBUG: printGameResult" << endl;
    cout << "Arvausten määrä on: " << numOfGuesses << endl;
}
