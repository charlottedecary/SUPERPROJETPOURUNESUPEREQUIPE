#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED
#include <iostream>
#include <vector>
#include "Damier.h"
#include "Case.h"
#include "Pion.h"

class Joueur
{
private :
    std::string m_nom;
    char m_equipe;
    std::vector<Animal*> m_piece;
public :
    void placerPion(Damier &jeu,int x,int y);
    void affiche();
    Joueur(std::string nom,char equipe);
};

#endif // JOUEUR_H_INCLUDED
