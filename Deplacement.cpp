#include <iostream>
#include "Affichage.h"
#include "Damier.h"
#include "Case.h"
#include "Console.h"
#include "Pion.h"
#include "Joueur.h"
#include "Deplacements.h"

int futur_coor_x(Pion* p,char dir)
{
    int x;

    if(dir=='6')
    {
        x = p->getPlace()->getx() + 1;
    }
    else
    {
        x = p->getPlace()->getx() - 1;
    }
    return x;
}
int futur_coor_y(Pion* p,char dir)
{
    int y;

    if(dir=='8')
    {
        y = p->getPlace()->gety() + 1;
    }
    else
    {
        y = p->getPlace()->gety() - 1;
    }
    return y;
}

bool test_Plateau(int x,int y)
{
    if((x<2)||(x>7)||(y<0)||(y>5))
    {
        return true;
    }
    else return false;
}

Case * futur_coor(Pion* p,char dir,Damier plateau)
{
    int x,y;
    bool valide=false;
    do
    {
        switch(dir)
        {
        case '8' :
        case '2' :
            y = futur_coor_y(p,dir);
            x = p->getPlace()->getx();
            valide=true;
            break;
        case '6' :
        case '4' :
            x = futur_coor_x(p,dir);
            y = p->getPlace()->gety();
            valide=true;
            break;
        default : std::cout<<"Ce n'est pas une direction !"<<std::endl;
        break;
        }
    }while(!valide);
    if(test_Plateau(x,y))
    {
          return plateau.getCase(x,y);
    }
    else return 0;
}
