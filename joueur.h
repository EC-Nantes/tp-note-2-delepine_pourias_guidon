#pragma once 
#include "ENUM.h"
#include <iostream>
#include "carte.h"
using namespace std;

class joueur
{
private:
    /* data */
    
public:
    COULEUR Tuile;
    joueur(/* args */);
    joueur(COULEUR var);
    ~joueur();
    carte jouer();
    void piocher(carte nouvelleCarte);
};


joueur::joueur(/* args */)
{
}

joueur::~joueur()
{
}

joueur::joueur(COULEUR var)
{
    Tuile = var;
}

carte joueur::jouer(){
    cout << "Les cartes s'affichent" << endl;
    cout << "Le joueur en choisit une" << endl;
    
    carte c1;
    return c1;
}

void joueur::piocher(carte nouvelleCarte){
    cout << "Le joueur pioche une carte" << endl;
}