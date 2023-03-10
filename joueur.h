#include "carte.h"
#include <vector>
#include <iostream>
#include "ENUM.h"

using namespace std;

class joueur
{
private:

    vector<carte*> main; //pointer car virtuel
    COULEUR Tuile;
public:
    joueur(COULEUR tuile);
    void Piocher(carte* nouvelleCarte);
    void Jouer();
    void Afficher();
    ~joueur();
};


