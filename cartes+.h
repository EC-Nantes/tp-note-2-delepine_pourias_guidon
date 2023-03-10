#pragma once
#include "carte.h"
#include <iostream>
using namespace std;


class carteplus : public carte
  {
  protected:
    
  public:
    carteplus();
    carteplus(COULEUR couleur);
    void action();
  };

