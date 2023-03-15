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
        bool checkFinPartie();
};

const char* COULEUR_NOM[] = {"INCOLOR", "ROUGE", "BLEU", "VERT", "JAUNE", "VIOLET"};


partie::partie(/* args */)
{
    cout << "Utilisation constructeur partie()" << endl; 
}

partie::~partie()
{
}

void partie::preparationDeLaPartie(){
    cout << "Préparation de la partie" << endl;
    // INITIALISATION DE LA PIOCHE
    for (size_t i = 1; i <= 5; i++)
    {
        //vectPioche.push_back(carteplusplus(i));
    }
    for (size_t i = 1; i <= 5; i++)
    {
        //vectPioche.push_back(carteplusplus(i));
    }

    // Mélanger les éléments du vecteur
    random_device rd;
    mt19937 g(rd());
    shuffle(vectPioche.begin(), vectPioche.end(), g);

    //INITIALISATION DES JOUEURS
    do {
        cout << "Entrez le nombre de joueurs (entre 2 et 5) : ";
        cin >> nbJoueurs;
    } while (nbJoueurs < 2 || nbJoueurs > 5);
    cout << "Vous avez choisi " << nbJoueurs << " joueurs." << endl;

    for (size_t i = 1; i <= nbJoueurs; i++)
    {
        vectJoueurs.push_back(joueur(COULEUR(i)));

    }
    
    
    shuffle(vectJoueurs.begin(), vectJoueurs.end(), g);

    //INITIALISATION DES TORTUES
    for (size_t i = 1; i <= nbJoueurs; i++)
    {
        vectTortue.push_back(tortue(i));
    }

    // FAIRE PIOCHER LES JOUEURS 5 CARTES
    for (size_t i = 0; i < nbJoueurs; i++)
    {
        /* code */
    }

    cout << "Partie prête" << endl;
}


void partie::deroulementPartie(){
    cout << "Lancement de la partie" << endl;
    while (this->checkFinPartie())
    {
        for (size_t i = 0; i < vectJoueurs.size(); i++)
        {
            cout << "+ Le joueur avec la tuile " << COULEUR_NOM[vectJoueurs[i].Tuile] << " joue" << endl;
            vectDefausse.push_back(vectJoueurs[i].jouer());
            vectDefausse.back().action();
            cout << "La carte est défaussée" << endl;

            vectJoueurs[i].piocher(vectPioche.back());
            vectPioche.pop_back();
        }
    }
    

    cout << "Fin de la partie" << endl;

}

bool partie::checkFinPartie(){
    cout << "---Check fin de partie---" << endl;
    for (size_t i = 0; i < vectTortue.size(); i++){
        cout << "La tortue " << COULEUR_NOM[vectTortue[i].couleur] 
        << " est sur la case " << vectTortue[i].getPosX() 
        << " en étant à la position " <<vectTortue[i].getPosY()<< endl;
        if(vectTortue[i].getPosX()==10&&vectTortue[i].getPosY()==0){
            cout << "La tortue " << COULEUR_NOM[vectTortue[i].couleur] << " a gagné !!!" << endl;
        }
    }

    return true;
}