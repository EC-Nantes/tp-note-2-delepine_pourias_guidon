
#include "cartes.h"
#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
  cout << "hello world" << endl; 
    
  tortue tortue1(ROUGE, 5, 0);
  tortue tortue2(BLEU, 1, 0);
  tortue tortue3(VIOLET, 2, 0);
  tortue tortue4(VERT, 3, 0);
  tortue tortue5(JAUNE, 2, 1);

  cartemoins carte(VIOLET);

  vector <tortue> vecteur= {tortue1, tortue2, tortue3, tortue3, tortue4, tortue5};

  vecteur=carte.action(4, vecteur);

  cout << vecteur[4].getCoordoX() << endl; 


    
}
