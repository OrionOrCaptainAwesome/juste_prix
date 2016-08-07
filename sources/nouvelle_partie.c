/*
 * Fichier code source .c pour le projet juste_prix
 * Auteur : Green Apple Crew  / mercredi 27 mai 2015, 08:25:15 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "saisie.h"
#include "boolean.h"

BOOL nouvelle_partie(void)
{
  BOOL b_continuer = FALSE;
  int un_choix = 0;
  fscanf( stdin, "%d", &un_choix);
  if ( un_choix != 1 )
    b_continuer = FALSE;
  else
    b_continuer = TRUE;

  return ( b_continuer );
}
