#pragma once
#include "carte.h"
#include <iostream>
using namespace std;


class carteplusplus : public carte
  {
  protected:
    
  public:
    carteplusplus();
    carteplusplus(COULEUR couleur);
    void action();
  };

