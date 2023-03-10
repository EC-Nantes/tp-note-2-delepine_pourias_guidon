#pragma once
#include "carte.h"
#include <iostream>
using namespace std;


class cartef : public carte
  {
  protected:
    
  public:
    cartef();
    cartef(COULEUR couleur);
    void action();
  };

