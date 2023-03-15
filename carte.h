#pragma once
#include "partie.h"
#include "joueur.h"
#include "cartes.h"


class carte
  {
  protected:
    COULEUR couleurs;
    ACTION actions;
  public:
    carte();
    carte(COULEUR couleur);
    virtual void action()=0;
    int getCouleur(){return this->couleurs;};
    int getAction(){return this->actions;};
  };



  
  

