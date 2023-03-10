#include "partie.h"
#include <random>
#include <algorithm>
using namespace std;


partie::partie(/* args */)
{
    
}

partie::~partie()
{

}

void partie::preparationDeLaPartie(){
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
    int nb_joueurs;
    do {
        cout << "Entrez le nombre de joueurs (entre 2 et 5) : ";
        cin >> nb_joueurs;
    } while (nb_joueurs < 2 || nb_joueurs > 5);
    cout << "Vous avez choisi " << nb_joueurs << " joueurs." << endl;

    for (size_t i = 1; i <= nb_joueurs; i++)
    {
        vectJoueurs.push_back(joueur(i));
    }
    random_device rd;
    mt19937 g(rd());
    shuffle(vectJoueurs.begin(), vectJoueurs.end(), g);



    

}