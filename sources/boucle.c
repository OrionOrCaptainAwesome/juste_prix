#include <stdio.h>
#include <stdlib.h>
#include "saisie.h"
#include "boucle.h"
#include "jeu.h"

int boucle_jeu(void)
{
  int v_compteur = 0;
  int nb_saisi = 0;
  int nbr_mystere = un_Jeu.nombre_mystere;
  do
  {
    nb_saisi = saisie_valeur();
    system ("clear");

#ifdef DEBUG
    fprintf(stdout, "Valeur de nb_saisi = %d \n", nb_saisi);
    fprintf( stdout, "  nbr_mystere = %d \n", un_Jeu.nombre_mystere);
#endif

    if (nb_saisi < nbr_mystere)
      fprintf ( stdout, "\nC'est plus !!\n\n");

    if (nb_saisi > nbr_mystere)
      fprintf( stdout, "\nC'est moins !!\n\n");

    v_compteur++;
  } while (nb_saisi != nbr_mystere);

  return (v_compteur);
}
