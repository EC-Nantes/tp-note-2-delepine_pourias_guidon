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
  
  int x=vecteur[num].getPosX();
  int y=vecteur[num].getPosY();
  
  vecteur[num].setPosX(x-1); 

  for (int z=0; z<=4;z++){ 
    if (vecteur[z].getPosX()==(x-1) && z!=num){
      sur_case++; //détécter le nombre de tortue présentes sur la case
    }
  }
  vecteur[num].setPosY(sur_case); //%aj de l'attribut Y

  for (int i=0; i<=4;i++){
    
    if (vecteur[i].getPosX()==x && i!=num){
      if (vecteur[i].getPosY()>y){
        vecteur[i].setPosX(vecteur[i].getPosX()-1);
        vecteur[i].setPosY(sur_case+1); //MAJ la position des tortues au-dessus de celle que l'on déplace
        sur_case++;
      }
    }
  } 
  return vecteur; //Retourne le vecteur de tortues mis à jour
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
  
  int x=vecteur[num].getPosX();
  int y=vecteur[num].getPosY();
  
  vecteur[num].setPosX(x+1); 

  for (int z=0; z<=4;z++){
    if (vecteur[z].getPosX()==(x+1) && z!=num){
      sur_case++;
    }
  }
  vecteur[num].setPosY(sur_case); 

  for (int i=0; i<=4;i++){
    
    if (vecteur[i].getPosX()==x && i!=num){
      if (vecteur[i].getPosY()>y){
        vecteur[i].setPosX(vecteur[i].getPosX()+1);
        vecteur[i].setPosY(sur_case+1);
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
  
  int x=vecteur[num].getPosX();
  int y=vecteur[num].getPosY();
  
  vecteur[num].setPosX(x+2); 

  for (int z=0; z<=4;z++){
    if (vecteur[z].getPosX()==(x+2) && z!=num){
      sur_case++;
    }
  }
  vecteur[num].setPosY(sur_case); 

  for (int i=0; i<=4;i++){
    
    if (vecteur[i].getPosX()==x && i!=num){
      if (vecteur[i].getPosY()>y){
        vecteur[i].setPosX(vecteur[i].getPosX()+2);
        vecteur[i].setPosY(sur_case+1);
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

  vector <int> dernieres={0}; //Vecteur qui définit la position dans le vecteur de tortues (vecteur) des tortues qui sont le moins avancé
  
  for (int i=1; i<=4;i++){
    if (vecteur[i].getPosX()<vecteur [dernieres[0]].getPosX()){
      dernieres={i};
    }
    else if (vecteur[i].getPosX() == vecteur [dernieres[0]].getPosX()){
      dernieres.push_back(i);
      }
  }

  int cpt = 0;
  
  for (int b=0 ; b<=4 ; b++){
    if (vecteur[b].getPosX() == vecteur[dernieres[0]].getPosX()+1){
      cpt++; //Détecte si des tortues sont déjà présentes sur la case où l'on sohaite déplacer celles souhaitées
    }
  }

    for (int b=0 ; b<=4 ; b++){
    if (b>0 && dernieres[b]!=0 || b==0){ //Pour détecter la fin de la liste (car la liste est complétée par des 0)
      vecteur[dernieres[b]].setPosX(vecteur[dernieres[b]].getPosX()+1); //Maj des positions x puis y des tortues qui sont les moins avancées
      vecteur[dernieres[b]].setPosY(cpt+vecteur[dernieres[b]].getPosY());
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
    if (vecteur[i].getPosX()<vecteur [dernieres[0]].getPosX()){
      dernieres={i};
    }
    else if (vecteur[i].getPosX() == vecteur [dernieres[0]].getPosX()){
      dernieres.push_back(i);
      }
  }

  int cpt = 0;
  
  for (int b=0 ; b<=4 ; b++){
    if (vecteur[b].getPosX() == vecteur[dernieres[0]].getPosX()+2){
      cpt++;
    }
  }

    for (int b=0 ; b<=4 ; b++){
    
    if (b>0 && dernieres[b]!=0 || b==0){
      vecteur[dernieres[b]].setPosX(vecteur[dernieres[b]].getPosX()+2);
      vecteur[dernieres[b]].setPosY(cpt+vecteur[dernieres[b]].getPosY());
      }
  }
  return vecteur;
}
