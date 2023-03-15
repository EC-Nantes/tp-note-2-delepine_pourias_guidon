#pragma once
#include "ENUM.h"
class carte
{
private:
    /* data */
public:
    carte(/* args */);
    ~carte();
    COULEUR getCouleur();
    ACTION getAction();
};

carte::carte(/* args */)
{
}

carte::~carte()
{
}
COULEUR carte::getCouleur(){
    return ROUGE;
}
ACTION carte::getAction(){
    return plusplus;
}
  
  

