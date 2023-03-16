#pragma once
#include"carte.h"
#include"tortue.h"
#include <iostream>

//Cartes -


class cartemoins : public carte
{
    
  public:
    cartemoins();
    cartemoins(COULEUR couleur);
  vector<tortue> action(int num, vector<tortue> vecteur);
};


cartemoins::cartemoins(){
}


cartemoins::cartemoins(COULEUR couleur){
  this->couleurs=couleur;
}



vector<tortue> cartemoins::action(int num, vector<tortue> vecteur){

  int sur_case=0;
  
  int x=vecteur[num].getCoordoX();
  int y=vecteur[num].getCoordoY();
  
  vecteur[num].setCoordoX(x-1); 

  for (int z=0; z<=4;z++){
    if (vecteur[z].getCoordoX()==(x-1) && z!=num){
      sur_case++;
    }
  }
  vecteur[num].setCoordoY(sur_case); 

  for (int i=0; i<=4;i++){
    
    if (vecteur[i].getCoordoX()==x && i!=num){
      if (vecteur[i].getCoordoY()>y){
        vecteur[i].setCoordoX(vecteur[i].getCoordoX()-1);
        vecteur[i].setCoordoY(sur_case+1);
        sur_case++;
      }
    }
  } 
  return vecteur;
} 



//Cartes +

class carteplus : public carte
  {
  protected:
    
  public:
    carteplus();
    carteplus(COULEUR couleur);
    vector<tortue> action(int num, vector<tortue> vecteur);
  };


carteplus::carteplus(){
}


carteplus::carteplus(COULEUR couleur){
  this->couleurs=couleur;
}


vector<tortue> carteplus::action(int num, vector<tortue> vecteur){

  int sur_case=0;
  
  int x=vecteur[num].getCoordoX();
  int y=vecteur[num].getCoordoY();
  
  vecteur[num].setCoordoX(x+1); 

  for (int z=0; z<=4;z++){
    if (vecteur[z].getCoordoX()==(x+1) && z!=num){
      sur_case++;
    }
  }
  vecteur[num].setCoordoY(sur_case); 

  for (int i=0; i<=4;i++){
    
    if (vecteur[i].getCoordoX()==x && i!=num){
      if (vecteur[i].getCoordoY()>y){
        vecteur[i].setCoordoX(vecteur[i].getCoordoX()+1);
        vecteur[i].setCoordoY(sur_case+1);
        sur_case++;
      }
    }
  } 

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

  int sur_case=0;
  
  int x=vecteur[num].getCoordoX();
  int y=vecteur[num].getCoordoY();
  
  vecteur[num].setCoordoX(x+2); 

  for (int z=0; z<=4;z++){
    if (vecteur[z].getCoordoX()==(x+2) && z!=num){
      sur_case++;
    }
  }
  vecteur[num].setCoordoY(sur_case); 

  for (int i=0; i<=4;i++){
    
    if (vecteur[i].getCoordoX()==x && i!=num){
      if (vecteur[i].getCoordoY()>y){
        vecteur[i].setCoordoX(vecteur[i].getCoordoX()+2);
        vecteur[i].setCoordoY(sur_case+1);
        sur_case++;
      }
    }
  } 

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

  vector <int> dernieres={0};
  
  for (int i=1; i<=4;i++){
    if (vecteur[i].getCoordoX()<vecteur [dernieres[0]].getCoordoX()){
      dernieres={i};
    }
    else if (vecteur[i].getCoordoX() == vecteur [dernieres[0]].getCoordoX()){
      dernieres.push_back(i);
      }
  }

  int cpt = 0;
  
  for (int b=0 ; b<=4 ; b++){
    if (vecteur[b].getCoordoX() == vecteur[dernieres[0]].getCoordoX()+1){
      cpt++;
    }
  }

    for (int b=0 ; b<=4 ; b++){
    
    if (b>0 && dernieres[b]!=0 || b==0){
      vecteur[dernieres[b]].setCoordoX(vecteur[dernieres[b]].getCoordoX()+1);
      vecteur[dernieres[b]].setCoordoY(cpt+vecteur[dernieres[b]].getCoordoY());
      }
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

  vector <int> dernieres={0};
  
  for (int i=1; i<=4;i++){
    if (vecteur[i].getCoordoX()<vecteur [dernieres[0]].getCoordoX()){
      dernieres={i};
    }
    else if (vecteur[i].getCoordoX() == vecteur [dernieres[0]].getCoordoX()){
      dernieres.push_back(i);
      }
  }

  int cpt = 0;
  
  for (int b=0 ; b<=4 ; b++){
    if (vecteur[b].getCoordoX() == vecteur[dernieres[0]].getCoordoX()+2){
      cpt++;
    }
  }

    for (int b=0 ; b<=4 ; b++){
    
    if (b>0 && dernieres[b]!=0 || b==0){
      vecteur[dernieres[b]].setCoordoX(vecteur[dernieres[b]].getCoordoX()+2);
      vecteur[dernieres[b]].setCoordoY(cpt+vecteur[dernieres[b]].getCoordoY());
      }
  }
  return vecteur;
}
