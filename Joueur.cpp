#include <iostream>
#include <vector>
#include "Damier.h"
#include "Case.h"
#include "Pion.h"
#include "Joueur.h"

Joueur::Joueur(std::string nom,char equipe)
:m_nom(nom)
{
    for(int i=0;i<5;i++)
    {
        if((equipe=='a')||(equipe=='b'))
        {
            if(equipe=='a')
            {
                m_piece.push_back(new Rhinoceros(0));
            }
            if(equipe=='b')
            {
                m_piece.push_back(new Elephant(0));
            }
        }
    }
}
