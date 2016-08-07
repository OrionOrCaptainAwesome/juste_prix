#include <stdio.h>
#include <stdlib.h>
#include "affichage_score.h"

void affichage_resultat (int score)
{
    fprintf( stdout, "\nBravo !!\n");
    fprintf( stdout, "\nVotre score est de %d\n", score);
}
