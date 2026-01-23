#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string, int, int);
private:
    string password = "pizza";
    int flour;
    int water;
    int makePizza();
protected:
};

#endif // ITALIANCHEF_H
