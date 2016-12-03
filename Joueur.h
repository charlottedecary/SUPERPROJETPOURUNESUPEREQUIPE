#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED
#include <iostream>
#include <vector>
#include "Damier.h"
#include "Case.h"
#include "Pion.h"
#include "Console.h"

class Joueur
{
private :
    std::string m_nom;
    char m_equipe;
    std::vector<Animal*> m_piece;
public :
    Pion * getPion(int i);
    void placerPion(Damier &jeu,int i,int x,int y);
    void deplacerPion(Damier &jeu,int i,int x,int y);
    void affichage_pions(Console* pConsole);
    Joueur(std::string nom,char equipe,Damier &jeu);
};

#endif // JOUEUR_H_INCLUDED
