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
joueur::joueur(COULEUR tuile)
{
    this->Tuile= tuile;
}
void joueur::Piocher(carte CartePioche)
{
    this->hand.push_back(CartePioche);
}
void joueur::Jouer()
{
    int NumCarte = 0;
    //Step Choisir carte
    this->Afficher();
    std:cin >> NumCarte;
    //Step 2
}
void joueur::Afficher()
{
    for(int i(0);i<this->hand.size();i++){
        std::cout << "Carte "<<i << " : get COULEUR et get TYPE" << endl;
        //std::cout <<  this->hand[0].getCouleur() << std::endl;
    }
    
}
joueur::~joueur()
{
}

