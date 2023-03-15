/**
 * \file     tortue.h
 * \brief    Définition de la classe tortue
 * \author   BENAROCH POURIAS GUIDON DELEPINE
 * \version  0.1
 * \date     10/03/2023
 *
 */

#pragma once
#include "ENUM.h"
#include <vector>

using namespace std;

class tortue {
    public:
    COULEUR couleur;
    int positionX = 0; //abscisse 1->10
    int positionY = 0; //ordonnée 1->5

    /*
    ** Méthode: Constructeur de la classe
    */
    tortue(COULEUR couleur);
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


/*
** Méthode: Constructeur de la classe
*/
tortue::tortue(COULEUR nouvCouleur){
    this -> couleur= nouvCouleur;
};

/*
    ** Méthode: Seteur de la valeur X
    */
void tortue::setCoordoX(int x)
{
    this -> positionX= x;
}


/*
    ** Méthode: Seteur de la valeur Y
    */
void tortue::setCoordoY(int y)
{
    this -> positionY= y;
}


/*
    ** Méthode: Accesseur à la valeur de X
    */
int tortue::getCoordoX()
{
    return this -> positionX ;
}


/*
    ** Méthode: Accesseur à la valeur de Y
    */
int tortue::getCoordoY()
{
    return this -> positionY;
}

