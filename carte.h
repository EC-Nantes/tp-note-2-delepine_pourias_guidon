#pragma once 
#include <iostream>
#include <string>
using namespace std;

class carte
{
private:
    /* data */
public:
    carte(/* args */);
    ~carte();
    void action();
    COULEUR getCouleur();
    string getAction();
};

carte::carte(/* args */)
{
}

carte::~carte()
{
}

string carte::getAction(){
    return "L'action est [c'est ton tour clément]";
}

void carte::action(){
    cout << "L'action est effectuée" << endl;
}

COULEUR carte::getCouleur(){

    return ROUGE;
}

