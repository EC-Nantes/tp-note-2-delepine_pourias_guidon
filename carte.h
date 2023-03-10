class carte
  {
  protected:
    COULEUR couleur;
    COULEUR couleurs;
    ACTION actions;
  public:
    carte();
    carte(COULEUR couleur);
    carte(COULEUR couleur, ACTION action);
    virtual void action()=0;
  };
