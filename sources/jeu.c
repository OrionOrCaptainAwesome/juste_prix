#include <stdio.h>
#include <stdlib.h>
#include "saisie.h"
#include "affichage_score.h"
#include "boucle.h"

void jeu (void)
{
  //unsigned long t0;
  //unsigned long t1;
  //time_t chrono;
  int score = 0;

  system ("clear");
  fprintf ( stdout, "\nTop C'est Parti !\n\n");
  //t0 = clock();

  score = boucle_jeu();//boucle_jeu renvoie compteur

  //t1 = clock();
  //chrono = (t1 - t0)/CLOCKS_PER_SEC;
  //score = (120/chrono)+(60/v_compteur);

  affichage_resultat(score);
}
