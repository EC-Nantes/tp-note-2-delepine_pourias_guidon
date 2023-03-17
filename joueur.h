#pragma once
//#include <vector>
//#include <iostream>
#include "ENUM.h"
#include "cartes.h"

using namespace std;

const char* COULEUR_NOM[] = {"INCOLOR", "ROUGE", "BLEU", "VERT", "JAUNE", "VIOLET"};

class joueur
{
protected:
    vector<carte&> hand; //modifier int par carte
    COULEUR Tuile;
public:

    joueur(COULEUR tuile);
    void Piocher(carte& CartePioche);
    carte& Jouer();
    COULEUR getTuile();
    void Afficher();
    void choisirNumber();
    ~joueur();
};

joueur::joueur(COULEUR tuile)
{
    this->Tuile= tuile;
}
void joueur::Piocher(carte& CartePioche)
{
    this->hand.push_back(CartePioche);
}
carte& joueur::Jouer()
{
    int NumCarte = 0;
    carte * CarteAction;
    int stopLoop = 0;

    //Step Choisir carte

    this->Afficher();

    if(this->hand.size() > 0){
        do{
                cout << endl << "Choisir une carte : ";
                cin >> NumCarte;
            }
        while(NumCarte > (this->hand.size()+1));
        cout << "Vous avez choisi la carte " << NumCarte << endl;
    }

    return * CarteAction;
    
}
void joueur::Afficher()
{
    for(int i(0);i<this->hand.size();i++){
        std::cout << "Carte " << i+1 << " : "<< COULEUR_NOM[this->hand[i].getCouleur()] << " | "<< this->hand[i].getAction() << endl;
    }
}
COULEUR joueur::getTuile(){
    return this->Tuile;
}

joueur::~joueur()
{
}