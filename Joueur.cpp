#include <iostream>
#include <vector>
#include "Damier.h"
#include "Case.h"
#include "Pion.h"
#include "Joueur.h"
#include "Affichage.h"
#include <cstdlib>
#include <cstdio>
#include <windows.h>

Joueur::Joueur(std::string nom,char equipe,Damier &jeu)
:m_nom(nom)
{
    for(int i=0;i<5;i++)
    {
        if((equipe=='a')||(equipe=='b'))
        {
            if(equipe=='a')
            {
                m_piece.push_back(new Rhinoceros(jeu.getCase(0,i),false));
            }
            if(equipe=='b')
            {
                m_piece.push_back(new Elephant(jeu.getCase(8,i),false));
            }
        }
    }
}

Pion* Joueur::getPion(int i)
{
    return m_piece[i];
}

///METHODE DE JOUEUR!
void Joueur::placerPion(Damier &jeu,int i,int x,int y)
{
    if(!m_piece[i]->Plateau())
    {
        if(((x==2)||(x==6))&&((y==0)||(y==4)))
        {
            jeu.getCase(x,y)->ajoutpion(m_piece[i]);
            m_piece[i]->bouger(jeu.getCase(x,y));
            system("pause");
            m_piece[i]->setOrientation();
            m_piece[i]->entrer_plateau();
        }
        else
            std::cout<<"Vous ne pouvez entrer un pion que sur le bord!!"<<std::endl;
    }
}

void Joueur::deplacerPion(Damier &jeu,int i,int x,int y)
{

}

void Joueur::affichage_pions(Console* pConsole)
{
    for(int i=0;i<5;i++)
        affichage_pion(m_piece[i],pConsole);
}
