#include "Pion.h"
#include "Case.h"
#include <iostream>
#include <cstdio>
#include <windows.h>



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

bool Pion::Plateau()
 {
     if(m_plateau)
        return true;
     else
        return false;
 }

 void Pion::entrer_plateau()
 {
     m_plateau = true;
 }
void Pion::sortir_plateau()
{
    m_plateau=false;
}
 void Pion::bouger(Case *futur_case)
 {
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

void Animal::setOrientation()
{
    unsigned int orientation;
    bool test=false;
    do
    {
        std::cout<<"Choisissez l'orientation du pion "<<std::endl;
        std::cout<<"haut : 1, bas : 2, gauche : 3, droite : 4"<<std::endl;
        std::cin>>orientation;

        if((orientation>0)&&(orientation<5))
        {
            m_orientation=orientation;
            test = true;
        }
        else std::cout<<"orientation invalide!"<<std::endl;
    }while(!test);
}

Rhinoceros::Rhinoceros(Case* place, bool plateau)
:Animal(place,plateau)
{}

Rhinoceros::~Rhinoceros()
{}

void Rhinoceros::afficher_char()const
{
    std::cout<<"R";
    if(m_plateau)
    {
         switch(m_orientation)
        {
        case 1 : std::cout<<"h";break;
        case 2 : std::cout<<"b";break;
        case 3 : std::cout<<"g";break;
        case 4 : std::cout<<"d";break;
        }
    }
}

Elephant::Elephant(Case *place,bool plateau)
:Animal(place,plateau)
{}
Elephant::~Elephant()
{}

void Elephant::afficher_char()const
{
    std::cout<<"E";
    if(m_plateau)
    {
         switch(m_orientation)
        {
        case 1 : std::cout<<"h";break;
        case 2 : std::cout<<"b";break;
        case 3 : std::cout<<"g";break;
        case 4 : std::cout<<"d";break;
        }
    }
}
