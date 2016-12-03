#include <iostream>
#include "Case.h"
#include "Console.h"
#include "Pion.h"

Case::Case(int x,int y)
 : m_x(x),m_y(y),m_pion(0)
 {
 }
 Case::~Case()
 {
     delete m_pion;
 }

int Case::getx()
{
    return m_x;
}
int Case::gety()
{
    return m_y;
}

Pion* Case::getpion()
{
        return m_pion;
}

bool Case::aUnPion()
{
    if(m_pion!=0)
    return true;
    else return false;
}

void Case::ajoutpion(Pion* pion)
 {
     pion->getPlace()->enlevepion();
     m_pion = pion;
 }
///MODIF !!!
void Case::enlevepion()
{
    Console* pConsole = NULL;
    pConsole = Console::getInstance();

    m_pion=nullptr;

    pConsole->gotoLigCol(5+2*m_x,10+4*m_y);
    std::cout<<"   ";
}
