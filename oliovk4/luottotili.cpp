#include "luottotili.h"
#include <iostream>

using namespace std;

Luottotili::Luottotili()
{
    cout << "Olen Luottotili: defaultkonstruktorissa!" << endl;
}

Luottotili::Luottotili(string om, double lR) : Pankkitili(om)
{
    cout << "Olen Luottotili: parametrikonstruktorissa!" << endl;
    luottoRaja = lR;
}

bool Luottotili::deposit (double sum)
{
    //cout << "Olen Luottotili: velanmaksussa!" << endl;
    cout << "Saldo before: " << saldo << endl;
    cout << "Saldo after: " << sum + saldo << endl;
    if ((sum < 0) || ((sum + saldo) > 0 ) ){
        return false;
    }
    saldo += sum;
    return true;
}

bool Luottotili::withdraw (double sum)
{

    //cout << "Olen Luottotili: velannostossa!" << endl;
    cout << "Luottoraja: " << luottoRaja << endl;
    cout << "Saldo before: " << saldo << endl;
    cout << "saldo after: " << saldo - sum << endl;
    if ((sum < 0) || ((std::abs(saldo) + sum) > luottoRaja) )
    {
        return false;
    }
    saldo -= sum;
    return true;
}
