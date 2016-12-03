#ifndef AFFICHAGE_H_INCLUDED
#define AFFICHAGE_H_INCLUDED
#include "Case.h"
#include "Pion.h"
#include "Damier.h"
#include "Console.h"

        ///MODIF!!!!

void affichage_plateau(Console* pConsole);

void affichage_pion(Pion* jeu,Console*pConsole);
void affichage_Animal(Animal *pion,Console* pConsole);

#endif // AFFICHAGE_H_INCLUDED
