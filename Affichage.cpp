#include <iostream>
#include "Affichage.h"
#include "Console.h"


        ///MODIF!!!!

void affichage_plateau(Console*pConsole)
{
    pConsole->gotoLigCol(0,0);

    std::cout<<"                                             "<<std::endl;
    std::cout<<"                                             "<<std::endl;
    std::cout<<"                  1   2   3   4   5          "<<std::endl;
    std::cout<<"                                             "<<std::endl;
    std::cout<<"        +---+   +---+---+---+---+---+   +---+"<<std::endl;
    std::cout<<"    A   |   |   |   |   |   |   |   |   |   |"<<std::endl;
    std::cout<<"        |---|   |---+---+---+---+---|   |---|"<<std::endl;
    std::cout<<"    B   |   |   |   |   |   |   |   |   |   |"<<std::endl;
    std::cout<<"        |---|   |---+---+---+---+---|   |---|"<<std::endl;
    std::cout<<"    C   |   |   |   |   |   |   |   |   |   |"<<std::endl;
    std::cout<<"        |---|   |---+---+---+---+---|   |---|"<<std::endl;
    std::cout<<"    D   |   |   |   |   |   |   |   |   |   |"<<std::endl;
    std::cout<<"        |---|   |---+---+---+---+---|   |---|"<<std::endl;
    std::cout<<"    E   |   |   |   |   |   |   |   |   |   |"<<std::endl;
    std::cout<<"        +---+   +---+---+---+---+---+   +---+"<<std::endl;


}

        ///MODIF!!!!

void affichage_pion(Pion *pion,Console* pConsole)
{
    pConsole->gotoLigCol(5+2*pion->getPlace()->gety(),10+4*pion->getPlace()->getx());
    pion->afficher_char();
}
