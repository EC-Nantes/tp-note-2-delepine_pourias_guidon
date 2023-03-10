#pragma once
#include "carte.h"
#include <iostream>
using namespace std;


class carteff : public carte
  {
  protected:
    
  public:
    carteff();
    carteff(COULEUR couleur);
    void action();
  };

