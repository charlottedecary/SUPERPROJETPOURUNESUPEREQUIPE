#include <iostream>
#include "Affichage.h"
#include "Damier.h"
#include "Case.h"
#include "Console.h"
#include "Pion.h"
#include "Joueur.h"
#include <cstdlib>
#include <cstdio>
#include <windows.h>

using namespace std;


///METHODE DE DAMIER ?
/*void affiche(Damier &jeu)
{
    int ligne = 1;
    int collonne = 1;
    for(int i=0;i<(jeu.getTaille());i++)
    {
        ligne =i+1;
        for(int j=0;j<(jeu.getTaille());j++)
        {
            collonne=j+1;
            cout << "contenu de la case "<<ligne<<","<<collonne<<" : "<<jeu.getCase(i,j)->getx()<<", "<<jeu.getCase(i,j)->gety();
            if(jeu.getCase(i,j)->aUnPion())
            cout<<endl;
        }
    }
}*/


int main()
{
        ///MODIF!!!!
    Console*pConsole = NULL;
    pConsole = Console::getInstance();

    ///CREATION PLATEAU DE JEU
    Damier jeu(9);
    jeu.initTab();
    ///CREATION ET INITIALISATION DES PIONS
    Pion *M = new Montagne(jeu.getCase(4,1),true);
    Pion *M1 = new Montagne(jeu.getCase(4,2),true);
    Pion *M2 = new Montagne(jeu.getCase(4,3),true);

    Joueur j1("coco",'a',jeu);
    Joueur j2("cucu",'b',jeu);

    affichage_plateau(pConsole);

    j1.affichage_pions(pConsole);
    j2.affichage_pions(pConsole);


    int a;
    std::cin>>a;


    j1.placerPion(jeu,3,2,0);

/*
    affichage_plateau(pConsole);


    j1.affichage_pions(pConsole);
    j2.affichage_pions(pConsole);

    //j1.deplacerPion();
    /*
    affichage_pions(M);
    affichage_pions(M1);
    affichage_pions(M2);
    affichage_pions(R);
    affichage_pions(R1);
    affichage_pions(R2);
    affichage_pions(R3);
    affichage_pions(R4);
    affichage_pions(E);
    affichage_pions(E1);
    affichage_pions(E2);
    affichage_pions(E3);
    affichage_pions(E4);
    */
    ///BOUCLE DE JEU


    return 0;
}
