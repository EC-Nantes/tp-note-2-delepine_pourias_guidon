#pragma once
#include "ENUM.h"
#include"tortue.h"

class carte {
protected:
  COULEUR couleurs;
  ACTION actions;

public:
  carte();
  carte(COULEUR couleur);
  //virtual tortue action(tortue tortue1, tortue tortue2, tortue tortue3, tortue tortue4, tortue tortue5) = 0;

  virtual vector<tortue> action(int num, vector<tortue> vecteur) = 0;
  int getCouleur() { return this->couleurs; };
  int getAction() { return this->actions; };
};
