#pragma once
#include "carte.h"
#include <vector>

using namespace std;

class joueur
{
private:
    vector<carte> main;
    int Tuile;
public:
    joueur();
    joueur(int tuile);
    bool Piocher();
    bool Jouer();
    bool Afficher();
    ~joueur();
};


