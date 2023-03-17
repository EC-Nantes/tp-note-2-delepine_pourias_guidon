#pragma once 
#include <iostream>
#include <string>
#include "ENUM.h"
#include <vector>
#include "tortue.h"
using namespace std;

class carte
{
protected:
    COULEUR couleurs;
    ACTION actions;
public:
    carte(/* args */);
    ~carte();
    COULEUR getCouleur();
    ACTION getAction();
    virtual vector<tortue> action(int num, vector<tortue> vecteur) = 0;
};

carte::carte(/* args */)
{
}

carte::~carte()
{
}

ACTION carte::getAction(){
    return this->actions;
}


COULEUR carte::getCouleur(){
    return this->couleurs;
}

