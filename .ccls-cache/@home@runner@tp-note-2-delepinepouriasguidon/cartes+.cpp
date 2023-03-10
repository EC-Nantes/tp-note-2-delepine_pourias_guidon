#include "cartes+.h"
#include <iostream>
using namespace std;


carteplus::carteplus(){
  this->couleur=0;
}


carteplus::carteplus(COULEUR couleur){
  this->couleur=couleur;
}


carteplus::action