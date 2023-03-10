#include <iostream>
#include <vector>
#include "joueur.h"
using namespace std;

class partie
{
private:
    /* data */
    vector<joueur> vectJoueurs;
    vector<tortue> vectTortues;
    vector<carte> vectPioche;
    vector<carte> vectDefausse;

public:
    partie(/* args */);
    ~partie();
};


