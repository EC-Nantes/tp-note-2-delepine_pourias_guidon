#pragma once
#include <iostream>
#include "main.cpp"
using namespace std;


class carte
  {
  protected:
    COULEUR couleur;
  public:
    carte();
    carte(COULEUR couleur);
    virtual void action()=0;
  };



  
  

