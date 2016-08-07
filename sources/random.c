#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jeu.h"

void initialize_rand( void )
{
  //srand(time(NULL));

  /* on declare une variable nommee t1 de type temps (time_t)*/
  time_t t1;

  /* time (&t1) ecrit la valeur du temps au moment de l'execution
       a l'adresse de t1*/
  (void)srand(time(&t1));

  /*
    srand genere une suite de nombres aleatoires
    a partir de la "graine" (valeur de t1)
    ecrite a l'adresse de t1
   */
  srand((long)t1);
}

int alea()
{
  return ( rand() % (un_Jeu.maxi_fourchette) + 1);
}
