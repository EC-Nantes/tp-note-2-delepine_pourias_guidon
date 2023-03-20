#pragma once
class tortue
{
private:
    /* data */
    int posX = 0;
    int posY = 0;
public:
    int couleur = 0;
    tortue(/* args */);
    ~tortue();
    tortue(int x);
    int getPosX();
    int getPosY();
    void setPosX(int x);
    void setPosY(int y);
};

tortue::tortue(/* args */)
{
}

tortue::~tortue()
{
}

int tortue::getPosX(){
    return this->posX;
}
int tortue::getPosY(){
    return this->posY;
}
void tortue::setPosX(int x){
    this->posX = x;
}
void tortue::setPosY(int y){
    this->posY = y;
}

tortue::tortue(int x){
    this->couleur = x;
}