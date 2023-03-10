#include "carte.h"

carte::carte(){
    //this->couleurs=0;
}
carte::carte(COULEUR couleur){
    this->couleurs=couleur;

}
carte::carte(COULEUR couleur, ACTION action){
    this->couleurs=couleur;
    this->actions=action;
  }