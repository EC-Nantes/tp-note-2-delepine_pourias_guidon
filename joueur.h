#pragma once
#include <vector>
#include "ENUM.h"
#include "partie.h"
#include "carte.h"

using namespace std;

class joueur
{
private:
    vector<carte> hand; //modifier int par carte
    COULEUR Tuile;
public:

    joueur(COULEUR tuile);
    void Piocher();
    void Jouer();
    void Afficher();
    ~joueur();
};


