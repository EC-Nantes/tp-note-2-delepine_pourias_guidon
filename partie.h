#pragma once
#include "ENUM.h"
#include <vector>
#include <iostream>
#include "joueur.h"
#include "carte.h"
#include "tortue.h"
#include <random>
#include <algorithm>
using namespace std;


class partie
{
private:
    int nbJoueurs = 0;
    vector<joueur> vectJoueurs;
    vector<carte> vectPioche;
    vector<carte> vectDefausse;
    vector<tortue> vectTortue;
public:
    partie(/* args */);
    ~partie();
    void preparationDeLaPartie();
    void deroulementPartie();
};


