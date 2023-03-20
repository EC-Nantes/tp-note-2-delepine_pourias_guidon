#pragma once 
#include <iostream>
#include <string>
#include "ENUM.h"
#include "tortue.h"
using namespace std;

class carte
{
private:
  COULEUR couleurs;
  ACTION actions;
public:
    carte(/* args */);
    carte(ACTION typeAction, COULEUR typeCouleur);
    ~carte();
    vector<tortue> action(vector<tortue> vecteur);
    COULEUR getCouleur();
    ACTION getAction();
};

carte::carte(/* args */)
{
}

carte::carte(ACTION typeAction, COULEUR typeCouleur)
{
    this->actions = typeAction;
    this->couleurs = typeCouleur;
}

carte::~carte()
{
}

ACTION carte::getAction(){
    return this->actions;
}

vector<tortue> carte::action(vector<tortue> vecteur){
    const char* ACTION_NOM[] = {"plusplus", "plus", "moins", "fleche", "flechefleche"};
  
    int num = this->getCouleur()-1;

    if (this->getCouleur()==0 && this->getAction()<3){
      cout<<"Vous pouvez utiliser l'action "<<ACTION_NOM[this->getAction()]<<" sur la tortue de votre choix :"<<endl<<endl<<"Tortue Rouge : 0"<<endl<<"Tortue BLEU : 1"<<endl<<"Tortue VERT : 2"<<endl<<"Tortue JAUNE : 3"<<endl<<"Tortue VIOLET : 4"<<endl<<endl<<"Choisissez une tortue : ";
      cin>>num;
    }

    if (this->actions == plusplus){
        int sur_case=0;
        
        int x=vecteur[num].getPosX();
        int y=vecteur[num].getPosY();

        if (x+2<10){vecteur[num].setPosX(x+2);}
        else{vecteur[num].setPosX(10);}
         

        for (int z=0; z<=4;z++){
            if (vecteur[z].getPosX()==(x+2) && z!=num){
            sur_case++;
            }
        }
        vecteur[num].setPosY(sur_case); 

        for (int i=0; i<=4;i++){
            
            if (vecteur[i].getPosX()==x && i!=num){
            if (vecteur[i].getPosY()>y){

              if (vecteur[i].getPosX()+2<10){vecteur[i].setPosX(vecteur[i].getPosX()+2);}
              else{vecteur[i].setPosX(10);}
              
                vecteur[i].setPosY(sur_case+1);
                sur_case++;
            }
            }
        } 

        
    }else if (this->actions == plus1){
        int sur_case=0;
        
        int x=vecteur[num].getPosX();
        int y=vecteur[num].getPosY();
        
        if (x+1<10){vecteur[num].setPosX(x+1);}
        else{vecteur[num].setPosX(10);} 

        for (int z=0; z<=4;z++){
            if (vecteur[z].getPosX()==(x+1) && z!=num){
            sur_case++;
            }
        }
        vecteur[num].setPosY(sur_case); 
      
        for (int i=0; i<=4;i++){
            
            if (vecteur[i].getPosX()==x && i!=num){
              if (vecteur[i].getPosY()>y){
  
                if (vecteur[i].getPosX()+1<10){vecteur[i].setPosX(vecteur[i].getPosX()+1);}
                else{vecteur[i].setPosX(10);}
  
                  vecteur[i].setPosY(sur_case+1);
                  sur_case++;
              }
            }
        } 

        
    }else if (this->actions == moins){
        int sur_case=0;
  
        int x=vecteur[num].getPosX();
        int y=vecteur[num].getPosY();
        
        if (x-1>0){vecteur[num].setPosX(x-1);}
        else{vecteur[num].setPosX(0);}

        for (int z=0; z<=4;z++){ 
            if (vecteur[z].getPosX()==(x-1) && z!=num){
                sur_case++; //détécter le nombre de tortue présentes sur la case
            }
        }
        vecteur[num].setPosY(sur_case); //%aj de l'attribut Y

        for (int i=0; i<=4;i++){
            if (vecteur[i].getPosX()==x && i!=num){
                if (vecteur[i].getPosY()>y){

                    if (vecteur[i].getPosX()-1>0){vecteur[i].setPosX(vecteur[i].getPosX()-1);}
                    else{vecteur[num].setPosX(0);}
                  
                    vecteur[i].setPosY(sur_case+1); //MAJ la position des tortues au-dessus de celle que l'on déplace
                    sur_case++;
                }
            }
        }
        
    }else if (this->actions == fleche){
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


                if (vecteur[dernieres[b]].getPosX()>0){
                  vecteur[dernieres[b]].setPosY(cpt+vecteur[dernieres[b]].getPosY());;
                }
              
              if (vecteur[dernieres[b]].getPosX()==0){
                  vecteur[dernieres[b]].setPosY(cpt+vecteur[dernieres[b]].getPosY());;
                  cpt++;
                }

              
              if (vecteur[dernieres[b]].getPosX()+1<10){vecteur[dernieres[b]].setPosX(vecteur[dernieres[b]].getPosX()+1);}
              else{vecteur[dernieres[b]].setPosX(10);}
              

            }
        }
        
    }else if (this->actions == flechefleche){
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


              if (vecteur[dernieres[b]].getPosX()>0){
                  vecteur[dernieres[b]].setPosY(cpt+vecteur[dernieres[b]].getPosY());;
                }
              
              if (vecteur[dernieres[b]].getPosX()==0){
                  vecteur[dernieres[b]].setPosY(cpt+vecteur[dernieres[b]].getPosY());;
                  cpt++;
                }
                
                if (vecteur[dernieres[b]].getPosX()+2<10){vecteur[dernieres[b]].setPosX(vecteur[dernieres[b]].getPosX()+2);}
                else{vecteur[dernieres[b]].setPosX(10);}
                
              }
        }
    }
    cout << "L'action est effectuée : "<< ACTION_NOM[this->getAction()] <<endl;
    return vecteur;
}

COULEUR carte::getCouleur(){
    return this->couleurs;
}

