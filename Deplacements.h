#ifndef DEPLACEMENTS_H_INCLUDED
#define DEPLACEMENTS_H_INCLUDED
#include <iostream>
#include "Damier.h"
#include "Case.h"
#include "Pion.h"
#include <cstdlib>

Case * futur_coor(Case place,char direction,Damier plateau);

bool test_Plateau();
bool test_Case();
bool test_pousser();

char futur_orientation();



#endif // DEPLACEMENTS_H_INCLUDED
