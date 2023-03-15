/**
 * \file     tortue.h
 * \brief    Définition de la classe tortue
 * \author   BENAROCH POURIAS GUIDON DELEPINE
 * \version  0.1
 * \date     10/03/2023
 *
 */

#pragma once
#include <vector>
#include "ENUM.h"

using namespace std;

class tortue {
    public:
    COULEUR couleur;
    int positionX; //abscisse 1->10
    int positionY; //ordonnée 1->5

    /*
    ** Méthode: Constructeur de la classe
    */
    tortue();
    tortue(COULEUR couleur, int x, int y);
    /*
    ** Méthode: Seteur de la valeur X
    */
   void setCoordoX(int x);
    /*
    ** Méthode: Seteur de la valeur X
    */
   void setCoordoY(int y);
    /*
    ** Méthode: Accesseur à la valeur de X
    */
    int getCoordoX();
    /*
    ** Méthode: Accesseur à la valeur de y
    */
    int getCoordoY();
    
};