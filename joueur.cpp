#include "joueur.h"
#include "entite.h"

joueur::joueur(int x, int y) : entite(x, y)
{
    this->x = x;
    this->y = y;
    this->dir[0] = 0;
    this->dir[1] = -1;
}
