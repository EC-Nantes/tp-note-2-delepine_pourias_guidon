#include "partie.h"
using namespace std;

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
        //vectTortue.push_back(tortue(i));
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
    while (true)
    {
        for (size_t i = 0; i < vectJoueurs.size(); i++)
        {
            cout << "Le joueur avec la tuile " << vectJoueurs[i].Tuile << " joue" << endl;
            i++;
        }
        
         
    }
    

    cout << "Fin de la partie" << endl;

}