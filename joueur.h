#pragma once
#include <vector>
#include "ENUM.h"
#include "partie.h"
#include "carte.h"

using namespace std;

class joueur
{
private:

    vector<int> main; //modifier int par carte
    COULEUR Tuile;
public:
    joueur(COULEUR tuile);
    bool Piocher();
    bool Jouer();
    bool Afficher();
    ~joueur();
};


