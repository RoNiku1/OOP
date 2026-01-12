#include <iostream>
#include <ctime>


using namespace std;

int game(int maxnum);

int main()
{
    int luku = game(50);
    cout << "Arvausten määrä: " << luku << endl;
    return 0;
}


int game(int maxnum) {

    int arvaus = 0;
    int arvausten_luku = 0;
    srand(time(NULL));
    int satunnaisluku = (rand() % maxnum) + 1;
    //debugausta varten:
    //cout << "Satunnais luku on " << satunnaisluku << " maxnum on: " << maxnum << endl;

    while (arvaus != satunnaisluku){        //Pyydetään lukua niin kauan kun arvattu luku on eri kuin satunnaisluku.

        cout << "Anna arvaus: " << endl;
        cin >> arvaus;
        arvausten_luku++;

        if(arvaus == satunnaisluku) {
            cout << "Oikein! " << endl;
        }
        else if (arvaus < satunnaisluku){
            cout << "Luku on suurempi! " << endl;
        }
        else if (arvaus > satunnaisluku){
            cout << "Luku on pienempi! " << endl;
        }
    }

    return arvausten_luku;
}
