#include "partie.h"
#include <iostream>
using namespace std;



int main(int argc, char const *argv[])
{
    srand(time(NULL));

    cout << "Main launched" << endl; 
    
    partie partie1;
    partie1.preparationDeLaPartie();
    partie1.deroulementPartie();

    cout << "Partie terminée" << endl; 
    return 0;
}
