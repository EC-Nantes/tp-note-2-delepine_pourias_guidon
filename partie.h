#pragma once
#include "ENUM.h"
//#include <vector>
//#include <iostream>
#include "joueur.h"
//#include "carte.h"
//#include "tortue.h"
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



partie::partie(/* args */)
{
    cout << "Création d'une partie" << endl; 
}

partie::~partie()
{
}

void partie::preparationDeLaPartie(){
    /*
    cout << "Préparation de la partie" << endl;
    // INITIALISATION DE LA PIOCHE
    // a terminer
    for (size_t i = 0; i < 52; i++)
    {
        vectPioche.push_back(carteplusplus(COULEUR(i)));
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
        for (size_t j = 0; j < 5; j++)
        {
            cout << "Le joueur avec la tuile " << COULEUR_NOM[vectJoueurs[i].getTuile()] << " pioche une carte" << endl;
            vectJoueurs[i].Piocher(vectPioche.back());
            vectPioche.pop_back();
        }
    }

    cout << "Partie prête" << endl;
    cout << endl;
    */
}


void partie::deroulementPartie(){
    int nbTour = 0;
    int i = 0;
    cout << "Lancement de la partie" << endl;
    /*
    while (this->checkFinPartie())
    {
        i = nbTour % (nbJoueurs +1);
        cout << endl;
        cout << "+ Le joueur avec la tuile " << COULEUR_NOM[vectJoueurs[i].getTuile()] << " joue" << endl;
        vectDefausse.push_back(vectJoueurs[i].Jouer());
        //vectDefausse.back().action(vectDefausse.back().getCouleur(), vectTortue);
        cout << "La carte est défaussée" << endl;

        vectJoueurs[i].Piocher(vectPioche.back());
        vectPioche.pop_back();
        nbTour++;
    }
    */
    

    cout << "Fin de la partie" << endl;

}

bool partie::checkFinPartie(){
    bool finPartie = true;
    //cout << "---Check fin de partie---" << endl;
    /*
    
    cout << endl;
    for (size_t i = 0; i < vectTortue.size(); i++){
        cout << "La tortue " << COULEUR_NOM[vectTortue[i].couleur] 
        << " est sur la case " << vectTortue[i].getPosX() 
        << " en étant à la position " <<vectTortue[i].getPosY()<< endl;

        if(vectTortue[i].getPosX()==10&&vectTortue[i].getPosY()==0){
            cout << "La tortue " << COULEUR_NOM[vectTortue[i].couleur] << " a gagné !!!" << endl;
            finPartie = false;
        }
    }

    */

    return finPartie;
}