#include "joueur.h"

joueur::joueur(COULEUR tuile)
{
    this->Tuile= tuile;
}
void joueur::Piocher(carte* nouvelleCarte)
{
    // ajoutez la nouvelle carte à la fin du vecteur
    this->main.push_back(nouvelleCarte); 
}
void joueur::Afficher()
{
    for (const auto& c : main) {
        //cout << "Couleur" << *c.couleurs << " Action " << *c.actions <<endl;
    }
}
joueur::~joueur()
{

}