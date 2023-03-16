
#include "cartes.h"
#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
  tortue tortue0(ROUGE, 1, 0); //Instanciation des 5 tortues
  tortue tortue1(BLEU, 1, 1);
  tortue tortue2(VIOLET, 2, 1);
  tortue tortue3(VERT, 3, 0);
  tortue tortue4(JAUNE, 2, 2);

  carteff carte(BLEU); //Instanciation de la carte ++
  vector <tortue> vecteur= {tortue0, tortue1, tortue2, tortue3, tortue4};
  vecteur=carte.action(2, vecteur); //Appel de la méthode action de la carte ++, avec       volonté d'agir sur la tortue en position 2 dans le vecteur


  cout << "X :"<<vecteur[0].getCoordoX() << endl; //affichage de la position des tortues
  cout << "Y :"<<vecteur[0].getCoordoY() << endl << endl; 

  cout << "X :"<<vecteur[1].getCoordoX() << endl; 
  cout << "Y :"<<vecteur[1].getCoordoY() << endl << endl; 

  cout << "X :"<<vecteur[2].getCoordoX() << endl; 
  cout << "Y :"<<vecteur[2].getCoordoY() << endl << endl;

  cout << "X :"<<vecteur[3].getCoordoX() << endl; 
  cout << "Y :"<<vecteur[3].getCoordoY() << endl << endl;

  cout << "X :"<<vecteur[4].getCoordoX() << endl; 
  cout << "Y :"<<vecteur[4].getCoordoY() << endl << endl;
    
}


