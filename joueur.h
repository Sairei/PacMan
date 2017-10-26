#ifndef JOUEUR_H
#define JOUEUR_H

#include "entite.h"

class joueur : public entite
{
    public:
        joueur(int x, int y);
        bool Move(int Event);
};

#endif // JOUEUR_H
