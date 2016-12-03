#ifndef PARTIE_H_INCLUDED
#define PARTIE_H_INCLUDED

class Partie
{
private :
    Joueur m_j1;
    Joueur m_j2;
    Damier m_plateau;
public :
    void jeu();
    bool finDeTour();
    void choix gagnant();
    void changerTour();
    Joueur *getJ1();
    Joueur *getJ2();
    Partie(int nb_case);
    ~Partie();
};


#endif // PARTIE_H_INCLUDED
