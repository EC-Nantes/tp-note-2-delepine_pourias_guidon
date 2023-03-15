/**
 * \file     tortue.cpp
 * \brief    Définition des méthodes de la classe tortue
 * \author   BENAROCH POURIAS GUIDON DELEPINE
 * \version  0.1
 * \date     10/03/2023
 *
 */

#include "tortue.h"

/*
** Méthode: Constructeur de la classe
*/
tortue::tortue(COULEUR nouvCouleur, int x, int y){
    this -> couleur= nouvCouleur;
    this -> positionX= x;
    this -> positionY= y;
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
