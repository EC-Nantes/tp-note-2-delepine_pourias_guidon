#pragma once
#include <iostream>
#include <vector>
#include "joueur.h"
#include "tortue.h"
using namespace std;

class partie
{
private:
    /* data */
    int nbJoueurs = 0;
    vector<joueur> vectJoueurs;
    vector<tortue> vectTortues;
    vector<carte> vectPioche;
    vector<carte> vectDefausse;

public:
    partie(/* args */);
    ~partie();
    void preparationDeLaPartie();
};


