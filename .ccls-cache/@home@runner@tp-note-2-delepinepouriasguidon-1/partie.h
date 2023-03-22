#pragma once
#include "ENUM.h"
#include <vector>
#include<iostream>
#include "joueur.h"
#include "carte.h"
#include "tortue.h"
#include <random>
#include <algorithm>
#include <chrono>
#include <thread>
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
    //std::cout << "...\n";
    //std::this_thread::sleep_for(std::chrono::seconds(2));
}

partie::~partie()
{
}

void partie::preparationDeLaPartie(){
    cout << "Préparation de la partie" << endl;
    //std::cout << "...\n";
    //std::this_thread::sleep_for(std::chrono::seconds(2));

    // INITIALISATION DE LA PIOCHE
    for (size_t i = 1; i <= 5; i++)
    {
        carte c1(plusplus, COULEUR(i));
        vectPioche.push_back(c1);
    }

    for (size_t j = 0; j < 5; j++)
    {
        for (size_t i = 1; i <= 5; i++)
        {
            carte c1(plus1, COULEUR(i));
            vectPioche.push_back(c1);
        }
    }

    for (size_t j = 0; j < 2; j++)
    {
        for (size_t i = 1; i <= 5; i++)
        {
            carte c1(moins, COULEUR(i));
            vectPioche.push_back(c1);
        }
    }

    for (size_t j = 0; j < 2; j++)
    {
        carte c1(flechefleche, INCOLOR);
        vectPioche.push_back(c1);
    }
    
    for (size_t j = 0; j < 3; j++)
    {
        carte c1(fleche, INCOLOR);
        vectPioche.push_back(c1);
    }
    
    for (size_t j = 0; j < 5; j++)
    {
        carte c1(plus1, INCOLOR);
        vectPioche.push_back(c1);
    }

    for (size_t j = 0; j < 2; j++)
    {
        carte c1(moins, INCOLOR);
        vectPioche.push_back(c1);
    }

    /*
    for (size_t i = 0; i < vectPioche.size(); i++)
    {
        cout << "Carte " << ACTION_NOM[vectPioche[i].getAction()] << " " << COULEUR_NOM[vectPioche[i].getCouleur()] << endl;
    }
    */
    
    // Mélanger les éléments du vecteur
    random_device rd;
    mt19937 g(rd());
    shuffle(vectPioche.begin(), vectPioche.end(), g);

    cout << endl << "La pioche a été mélangée " << endl<< endl;
    //std::cout << "...\n";
    //std::this_thread::sleep_for(std::chrono::seconds(2));
    /*
    for (size_t i = 0; i < vectPioche.size(); i++)
    {
        cout << "Carte " << ACTION_NOM[vectPioche[i].getAction()] << " " << COULEUR_NOM[vectPioche[i].getCouleur()] << endl;
    }
    */

    //INITIALISATION DES JOUEURS
    do {
        cout << "Entrez le nombre de joueurs réels (entre 0 et 5), le reste des joueurs seront des IA : ";
        cin >> nbJoueurs;
    } while (nbJoueurs < 0 || nbJoueurs > 5);
    cout << "Vous avez choisi " << nbJoueurs << " joueurs." << endl;

    for (size_t i = 1; i <= 5; i++)
    {
        if(i <= nbJoueurs){
            vectJoueurs.push_back(joueur(COULEUR(i),1));    //1 = REEL
        }
        else{
            vectJoueurs.push_back(joueur(COULEUR(i),0));    //0 = IA
        }
    }
    //cout << "Nombre de joueur = " << vectJoueurs.size() <<  endl;
    
    shuffle(vectJoueurs.begin(), vectJoueurs.end(), g);
    cout << "Le tour de chaque joueur a été défini aléatoirement" << endl << endl;
    //std::cout << "...\n";
    //std::this_thread::sleep_for(std::chrono::seconds(2));

    //INITIALISATION DES TORTUES
    for (size_t i = 1; i <= 5; i++)
    {
        vectTortue.push_back(tortue(i));
    }
    cout << endl << "Les tortues ont été initialisées" << endl << endl;
    //std::cout << "...\n";
    //std::this_thread::sleep_for(std::chrono::seconds(2));

    // FAIRE PIOCHER LES JOUEURS 5 CARTES
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            vectJoueurs[i].Piocher(vectPioche.back());
            vectPioche.pop_back();
        }
      cout << "Le joueur avec la tuile " << COULEUR_NOM[vectJoueurs[i].getTuile()] << " a pioché 5 cartes" << endl<< endl;
    }
    //std::cout << "...\n";
    //std::this_thread::sleep_for(std::chrono::seconds(2));

    cout << "Partie prête" << endl;
    //std::cout << "...\n";
    //std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << endl;
}


void partie::deroulementPartie(){
    int nbTour = 0;
    int i = 0;
    cout << "Lancement de la partie" << endl;
    //std::cout << "...\n";
    //std::this_thread::sleep_for(std::chrono::seconds(2));
    while (this->checkFinPartie())
    {
        if(vectPioche.size() == 0){
            cout << "Il n'y a plus de carte dans la pioche" << endl;

            for (size_t i = 0; i < vectDefausse.size(); i++)
            {
                vectPioche.push_back(vectDefausse.back());
                vectDefausse.pop_back();
            }

            random_device rd;
            mt19937 g(rd());
            shuffle(vectPioche.begin(), vectPioche.end(), g);
            cout << "Les cartes ont été mélangées" << endl;
            //std::cout << "...\n";
            //std::this_thread::sleep_for(std::chrono::seconds(1));
        }


        i = nbTour % 5;

        cout << endl;

        if(vectJoueurs[i].getTypeJoueur() == 0){ // IA
            cout << "+ L'IA avec la tuile " << COULEUR_NOM[vectJoueurs[i].getTuile()] << " joue" << endl;
        }else{
            cout << "+ Le joueur avec la tuile " << COULEUR_NOM[vectJoueurs[i].getTuile()] << " joue" << endl;
        }
        
        //std::cout << "...\n";
        //std::this_thread::sleep_for(std::chrono::seconds(1));
        
        vectDefausse.push_back(vectJoueurs[i].Jouer());

        vectTortue = vectDefausse.back().action(vectTortue, vectJoueurs[i].getTypeJoueur());
        cout << "La carte est défaussée" << endl;
        //std::cout << "...\n";
        //std::this_thread::sleep_for(std::chrono::seconds(1));

        

        vectJoueurs[i].Piocher(vectPioche.back()); 
        vectPioche.pop_back();
        
        //cout << "Voici la nouvelle main du joueur" << endl;
        //vectJoueurs[i].Afficher();
        
        nbTour++;
    }
    
    cout << "Fin de la partie" << endl;
}

bool partie::checkFinPartie(){
    bool finPartie = true;
    //cout << "---Check fin de partie---" << endl;
    
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
    //std::cout << "...\n";
    //std::this_thread::sleep_for(std::chrono::seconds(2));

    return finPartie;
}