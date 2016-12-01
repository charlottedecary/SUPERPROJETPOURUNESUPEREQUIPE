#include <iostream>
#include "Affichage.h"
#include "Damier.h"
#include "Case.h"
#include "Console.h"
#include "Pion.h"
#include <cstdlib>

using namespace std;

///METHODE DE JOUEUR!
void placerPion(Damier &jeu, Pion *a,int x,int y)
{
    jeu.getCase(x,y)->ajoutpion(a);
    a->bouger(jeu.getCase(x,y));
}

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
///NOTE : LES LIGNES ECRITES EN CETTE COULEUR SONT DES PROBLEMES DONT JE NE TE DEMANDE PAS LA RESOLUTION, JE SUIS JUSTE EN TRAIN DE LES INDENTER !///



int main()
{
    ///CREATION PLATEAU DE JEU
    Damier jeu(9);
    jeu.initTab();
    ///CREATION ET INITIALISATION DES PIONS
    Pion *M = new Montagne(jeu.getCase(4,1),true);
    Pion *M1 = new Montagne(jeu.getCase(4,2),true);
    Pion *M2 = new Montagne(jeu.getCase(4,3),true);
    Pion *R = new Rhinoceros(jeu.getCase(0,0),false);
    Pion *R1 = new Rhinoceros(jeu.getCase(0,1),false);
    Pion *R2 = new Rhinoceros(jeu.getCase(0,2),false);
    Pion *R3 = new Rhinoceros(jeu.getCase(0,3),false);
    Pion *R4 = new Rhinoceros(jeu.getCase(0,4),false);
    Pion *E = new Elephant(jeu.getCase(8,0),false);
    Pion *E1 = new Elephant(jeu.getCase(8,1),false);
    Pion *E2 = new Elephant(jeu.getCase(8,2),false);
    Pion *E3 = new Elephant(jeu.getCase(8,3),false);
    Pion *E4 = new Elephant(jeu.getCase(8,4),false);

    affichage_plateau();
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

    ///BOUCLE DE JEU

    int a;
    std::cin>>a;
    return 0;
}
