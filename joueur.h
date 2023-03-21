#pragma once
#include <vector>
#include <iostream>
#include <cstdlib>
#include "ENUM.h"
#include "carte.h"

using namespace std;

const char* COULEUR_NOM[] = {"INCOLORE", "ROUGE", "BLEUE", "VERTE", "JAUNE", "VIOLETTE"};
const char* ACTION_NOM[] = {"++", "+", "-", "fleche", "fleche fleche"};

class joueur
{
private:
    vector<carte> hand; //modifier int par carte
    COULEUR Tuile;
    /* 0 si IA 
        1 si Joueur
        */
    int JoueurIA;
public:

    joueur(COULEUR tuile, int IfJoueurIA0);
    void Piocher(carte CartePioche);
    carte Jouer();
    COULEUR getTuile();
    void Afficher();
    void choisirNumber();
    ~joueur();
    int getTypeJoueur();
};

int joueur::getTypeJoueur()
{
    return this->JoueurIA;
}

joueur::joueur(COULEUR tuile,int IfJoueurIA0)
{
    this->Tuile= tuile;
    this->JoueurIA = IfJoueurIA0;
}
void joueur::Piocher(carte CartePioche)
{
    this->hand.push_back(CartePioche);
}
carte joueur::Jouer()
{
    int NumCarte = 0;
    carte carteChoisie;

    //Step Choisir carte

    /*Si c'est une IA*/
    if(this->JoueurIA == 0)
    {
        NumCarte = rand()%this->hand.size();

        carteChoisie = this->hand[NumCarte];

        //retirer la carte sélectionnée
        auto it = hand.begin() + NumCarte;
        this->hand.erase(it);
    }
    else
    {
        this->Afficher();

        if(this->hand.size() > 0){
            do{
                    cout << endl << "Choisir une carte : ";
                    cin >> NumCarte;
                }
            while (NumCarte < 0 || NumCarte > 4);

            cout << "Vous avez choisi la carte " << NumCarte << endl;
        }
        carteChoisie = this->hand[NumCarte];

        //retirer la carte sélectionnée
        auto it = hand.begin() + NumCarte;
        this->hand.erase(it);
    }


    return carteChoisie;
}

void joueur::Afficher(){
    for(int i(0);i<this->hand.size();i++){
        std::cout << "Carte " << i << " : "<< COULEUR_NOM[this->hand[i].getCouleur()] << " "<< ACTION_NOM[this->hand[i].getAction()] << endl;
    }
}
COULEUR joueur::getTuile(){
    return this->Tuile;
}

joueur::~joueur()
{
}