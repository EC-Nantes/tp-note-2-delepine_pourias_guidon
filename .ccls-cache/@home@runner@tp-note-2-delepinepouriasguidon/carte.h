#pragma once
#include <iostream>
#include "main.cpp"
using namespace std;


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



  
  

