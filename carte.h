#pragma once 
#include <iostream>
using namespace std;

class carte
{
private:
    /* data */
public:
    carte(/* args */);
    ~carte();
    void action();
};

carte::carte(/* args */)
{
}

carte::~carte()
{
}

void carte::action(){
    cout << "L'action est effectuée" << endl;
}


