
#include "cartes.h"
#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
  tortue tortue0(ROUGE, 0, 0);
  tortue tortue1(BLEU, 0, 1);
  tortue tortue2(VIOLET, 0, 2);
  tortue tortue3(VERT, 2, 0);
  tortue tortue4(JAUNE, 2, 1);

  carteff carte(BLEU);
  vector <tortue> vecteur= {tortue0, tortue1, tortue2, tortue3, tortue4};
  vecteur=carte.action(0, vecteur);


  cout << "X :"<<vecteur[0].getCoordoX() << endl; 
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


