#include "partie.h"
#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
    cout << "Main launched" << endl; 
    
    partie partie1;
    partie1.preparationDeLaPartie();
    partie1.deroulementPartie();

    cout << "Main finished" << endl; 
    return 0;
}
