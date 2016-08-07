/*
 * Fichier code source .c pour le projet juste_prix
 * Auteur : Green Apple Crew  / mercredi 27 mai 2015, 08:25:15 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 * Fichier Principal
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "saisie.h"
#include "niveau.h"
#include "random.h"
#include "jeu.h"
#include "nouvelle_partie.h"
#include "boolean.h"

//#include "just_price.h"

int main(void)
{
  BOOL b_OnContinue = FALSE;
  do
  {
    system("clear");
    niveau_de_difficulte();
    initialize_rand();
    un_Jeu.mini_fourchette = 0;
    un_Jeu.nombre_mystere = alea(un_Jeu.maxi_fourchette);
    jeu();

    fprintf( stdout, "\nVoulez-vous refaire une partie ? \n\nOUI : Tapez 1\nNON : Tapez autre chose (suivi d'un appui sur la touche Entrée)");
    b_OnContinue = nouvelle_partie();

  } while ( b_OnContinue == TRUE);

    fprintf( stdout, "\n\nAu revoir !\n\n");

    return EXIT_SUCCESS;
}
