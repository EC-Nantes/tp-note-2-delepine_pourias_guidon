#pragma once
#include <vector>
#include <iostream>
#include "ENUM.h"
#include "carte.h"

using namespace std;

class joueur
{
private:
    vector<carte> hand; //modifier int par carte
    COULEUR Tuile;
public:

    joueur(COULEUR tuile);
    void Piocher(carte CartePioche);
    void Jouer();
    void Afficher();
    ~joueur();
};


