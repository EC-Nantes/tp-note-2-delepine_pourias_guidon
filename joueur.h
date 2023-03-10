#include "carte.h"
#include <vector>
#include "main.cpp"
#include <iostream>

using namespace std;

class joueur
{
private:

    vector<carte> main;
    COULEUR Tuile;
public:
    joueur(COULEUR tuile);
    void Piocher(carte nouvelleCarte);
    void Jouer();
    void Afficher();
    ~joueur();
};


