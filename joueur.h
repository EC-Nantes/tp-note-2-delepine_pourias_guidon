#pragma once
#include "carte.h"
#pragma once
#include <vector>
#pragma once
#include "main.cpp"

using namespace std;

class joueur
{
private:
    vector<carte> main;
    COULEUR Tuile;
public:
    joueur(/* args */);
    joueur(COULEUR tuile);
    bool Piocher();
    bool Jouer();
    bool Afficher();
    ~joueur();
};


