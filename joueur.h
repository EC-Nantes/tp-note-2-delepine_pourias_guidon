#include "carte.h"
#include <vector>
#include "main.cpp"

using namespace std;

class joueur
{
private:

    vector<carte> main;
    COULEUR Tuile;
public:
    joueur(COULEUR tuile);
    bool Piocher();
    bool Jouer();
    bool Afficher();
    ~joueur();
};


