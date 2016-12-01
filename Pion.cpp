#include "Pion.h"
#include "Case.h"
#include <iostream>


/// CLASSE MERE

Pion::Pion()
:m_place(0)
 {}

Pion::Pion(Case* place,bool plateau)
:m_place(place),m_plateau(plateau)
{
    place->ajoutpion(this);
}



Pion::~Pion()
 {
 }

/*bool Pion::Plateau()
 {
     if(m_place!=0)
        return true;
     else
        return false;
 }*/

 void Pion::bouger(Case *futur_case)
 {
    ///ON DOIT FAIRE UN SETTER POUR LE BOOL       /if(Plateau())
     m_place->enlevepion();

     m_place = futur_case;
 }

/*
 void Pion::afficher_info()
 {
   //std::cout<<m_nom<<std::endl;
    std::cout<<" place :";
    if(Plateau())
        std::cout<<m_place->getx()<<","<<m_place->gety()<<std::endl;
    else
        std::cout<<"  est hors du plateau"<<std::endl;
 }
 */

 Case* Pion::getPlace()
 {
     return m_place;
 }

 ///CLASSES FILLES

Montagne::Montagne(Case* place, bool plateau)
:Pion(place,plateau)
{}

Montagne::~Montagne()
{}

void Montagne::afficher_char()const
{
    std::cout<<"M"<<std::endl;
}

Animal::Animal(Case * place,bool plateau/*,Joueur joueur*/)
:Pion(place,plateau)
{}

Animal::~Animal()
{}

Rhinoceros::Rhinoceros(Case* place, bool plateau)
:Animal(place,plateau)
{}
Rhinoceros::~Rhinoceros()
{}

void Rhinoceros::afficher_char()const
{
    std::cout<<"R"<<std::endl;
}
Elephant::Elephant(Case *place,bool plateau)
:Animal(place,plateau)
{}
Elephant::~Elephant()
{}

void Elephant::afficher_char()const
{
    std::cout<<"E"<<std::endl;
}
