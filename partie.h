#pragma once
#include <iostream>
#pragma once
#include <vector>
#pragma once
#include "joueur.h"
#pragma once
#include "tortue.h"
using namespace std;

enum COULEUR {
  INCOLORE = 0,
  ROUGE = 1,
  BLEU = 2,
  VERT = 3,
  JAUNE = 4,
  VIOLET = 5
};

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


