#pragma once
#include "partie.h"
#include "joueur.h"
#include "carte.h"

//Cartes -


class cartemoins : public carte
  {
  protected:
    
  public:
    cartemoins();
    cartemoins(COULEUR couleur);
    //vector <tortue> action();
  };


//Cartes +

class carteplus : public carte
  {
  protected:
    
  public:
    carteplus();
    carteplus(COULEUR couleur);
    void action();
  };


//Cartes ++

class carteplusplus : public carte
  {
  protected:
    
  public:
    carteplusplus();
    carteplusplus(COULEUR couleur);
    void action();
  };


//Cartes f

class cartef : public carte
  {
  protected:
    
  public:
    cartef();
    cartef(COULEUR couleur);
    void action();
  };

//Cartes ff

class carteff : public carte
  {
  protected:
    
  public:
    carteff();
    carteff(COULEUR couleur);
    void action();
  };

