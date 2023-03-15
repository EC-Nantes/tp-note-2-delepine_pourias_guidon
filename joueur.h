#pragma once
#include <vector>
#include "ENUM.h"
#include "partie.h"

using namespace std;

class joueur
{
private:

    //vector<carte> main;
    COULEUR Tuile;
public:
    joueur(COULEUR tuile);
    bool Piocher();
    bool Jouer();
    bool Afficher();
    ~joueur();
};


