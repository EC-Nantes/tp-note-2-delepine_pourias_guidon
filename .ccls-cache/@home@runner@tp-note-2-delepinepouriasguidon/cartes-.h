#pragma once
#include "carte.h"
#include <iostream>
using namespace std;


class cartemoins : public carte
  {
  protected:
    
  public:
    cartemoins();
    cartemoins(COULEUR couleur);
    void action();
  };

