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
    carte(COULEUR couleur, ACTION action);
    virtual void action()=0;
  };



  
  

