#include "ENUM.h"
#include "joueur.h"
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    cout << "hello world" << endl; 
    joueur j1(ROUGE);

    carte C1;
    carte C2;
    carte C3;

    j1.Piocher(C1);
    j1.Piocher(C2);
    j1.Piocher(C3);

    j1.Jouer();
    /* code */
    return 0;
}
