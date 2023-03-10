#include "carte.h"
#include <iostream>
using namespace std;


carte::carte(){
}


carte::carte(COULEUR couleur, ACTION action){
    this->couleurs=couleur;
  this->actions=action;
  }