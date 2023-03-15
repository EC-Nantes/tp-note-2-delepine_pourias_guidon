#pragma once
#include"carte.h"
#include"tortue.h"

//Cartes -


class cartemoins : public carte
{
    
  public:
    cartemoins();
    cartemoins(COULEUR couleur);
    //tortue action(tortue tortue1, tortue tortue2, tortue tortue3, tortue tortue4, tortue tortue5); //Préciser que l'on ne comprend pas les erreurs avec vector


  vector<tortue> action(int num, vector<tortue> vecteur);
};


cartemoins::cartemoins(){
}


cartemoins::cartemoins(COULEUR couleur){
  this->couleurs=couleur;
}


//tortue cartemoins::action(tortue tortue1, tortue tortue2, tortue tortue3, tortue tortue4, tortue tortue5){

vector<tortue> cartemoins::action(int num, vector<tortue> vecteur){
  //int cpt = 0;
  vecteur[num].setCoordoX(vecteur[num].getCoordoX()-1); 
  
/*
  for (int i=1; i<=5;i++){
    if (vectortortue[i].getCoordoX()==tortue.getCoordoX()){
      if (vectortortue[i].getCoordoY()>tortue.getCoordoY()){
        vectortortue[i].setCoordoX(vectortortue[i].getCoordoX()-1);
        for (int z=1; z<=5;z++){
          if (vectortortue[y].getCoordoX()==vectortortue[i].getCoordoX()){
            cpt++;
          } 
        }
        

      }
    }
  }*/ // A terminer ... Gestion position y

  return vecteur;
}



//Cartes +

class carteplus : public carte
  {
  protected:
    
  public:
    carteplus();
    carteplus(COULEUR couleur);
    //tortue action(tortue tortue1, tortue tortue2, tortue tortue3, tortue tortue4, tortue tortue5);
    vector<tortue> action(int num, vector<tortue> vecteur);
  };


carteplus::carteplus(){
}


carteplus::carteplus(COULEUR couleur){
  this->couleurs=couleur;
}


vector<tortue> carteplus::action(int num, vector<tortue> vecteur){

  //int cpt = 0;
  vecteur[num].setCoordoX(vecteur[num].getCoordoX()+1); 

  return vecteur;
}
  


//Cartes ++

class carteplusplus : public carte
  {
  protected:
    
  public:
    carteplusplus();
    carteplusplus(COULEUR couleur);
    vector<tortue> action(int num, vector<tortue> vecteur);
  };


carteplusplus::carteplusplus(){
}


carteplusplus::carteplusplus(COULEUR couleur){
  this->couleurs=couleur;
}

vector<tortue> carteplusplus::action(int num, vector<tortue> vecteur){

  //int cpt = 0;
  vecteur[num].setCoordoX(vecteur[num].getCoordoX()+2); 

  return vecteur;
}
  

//Cartes f

class cartef : public carte
  {
  protected:
    
  public:
    cartef();
    cartef(COULEUR couleur);
    vector<tortue> action(int num, vector<tortue> vecteur);
  };


cartef::cartef(){
}


cartef::cartef(COULEUR couleur){
  this->couleurs=couleur;
}

vector<tortue> cartef::action(int num, vector<tortue> vecteur){

  int derniere = vecteur[num].getCoordoX();

  int cpt = 1;
  
  for (int i=2; i<=5;i++){
    if (vecteur[i].getCoordoX()<derniere){
      derniere=vecteur[i].getCoordoX();
      cpt=i;
    }
    vecteur[cpt].setCoordoX(derniere+2);
    
  }

  return vecteur;
}

  
//Cartes ff

class carteff : public carte
  {
  protected:
    
  public:
    carteff();
    carteff(COULEUR couleur);
    vector<tortue> action(int num, vector<tortue> vecteur);
  };


carteff::carteff(){
}


carteff::carteff(COULEUR couleur){
  this->couleurs=couleur;
}

vector<tortue> carteff::action(int num, vector<tortue> vecteur){

  int derniere = vecteur[num].getCoordoX();

  int cpt = 1;
  
  for (int i=2; i<=5;i++){
    if (vecteur[i].getCoordoX()<derniere){
      derniere=vecteur[i].getCoordoX();
      cpt=i;
    }
    vecteur[cpt].setCoordoX(derniere+1);
    
  }

  return vecteur;
}

