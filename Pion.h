#ifndef PION_H_INCLUDED
#define PION_H_INCLUDED
#include <iostream>

class Joueur;
class Case;

class Pion ///classe abstraite
{
protected:
    Case *m_place; ///case qui contient le pion
    bool m_plateau;
public:
    Case *getPlace();
    bool Plateau(); /// le pion est sur le plateau
    virtual void bouger(Case *future_case); ///déplacement du pion
    //void afficher_info();
    virtual void afficher_char() const=0; ///afficher le pion sur la console
    //virtual void entrer_plateau() const=0;
    ///setters
    void entrer_plateau();
    void sortir_plateau();
    ///connstructeurs, destructeurs
    Pion();
    Pion(Case* place,bool _plateau);
    virtual ~Pion();
};

class Montagne : public Pion
{
private :

public :
    virtual void afficher_char()const;

    Montagne(Case *place,bool plateau);
    virtual ~Montagne();
};

class Animal : public Pion
{
protected :
    char m_orientation;
    //Joueur *m_joueur;
public :
    void setOrientation();
    virtual void afficher_char()const=0; ///afficher l'orientation de l'animal sur la console
    //bool pousser();
    Animal();
    Animal(Case *place, bool plateau/*,Joueur joueur*/);
    virtual ~Animal();
};

class Rhinoceros : public Animal
{
private :
public :
     /// le pion est sur le plateau
    //virtual void bouger(Case *future_case); ///déplacement du pion
    virtual void afficher_char()const;
    //virtual void entrer_plateau()const;
    Rhinoceros(Case *place,bool plateau);
    virtual ~Rhinoceros();
};
class Elephant : public Animal
{
public:
    virtual void afficher_char()const;
//virtual void entrer_plateau()const;
    Elephant(Case *place,bool plateau);
    virtual ~Elephant();

};
#endif // PION_H_INCLUDED
