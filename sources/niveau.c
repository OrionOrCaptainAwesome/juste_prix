#include <stdio.h>
#include <stdlib.h>
#include "saisie.h"
#include "jeu.h"


int niveau_de_difficulte(void)
{
    int choix = 0;
    fprintf( stdout, "\nNiveau 1: Nombre Mystere entre 1 et 100: Tapez 1\nNiveau 2: Nombre Mystere entre 1 et 1 000: Tapez 2\nNiveau 3: Nombre Mystere entre 1 et 10 000: Tapez 3\nBorne maximale personaliser: Tapez 4\n");

    do
    {
        fprintf( stdout, "\nEntrer un chiffre entre 1 et 4\n" );
        choix = saisie_choix();
#ifdef DEBUG
        fprintf( stdout, "Choix coutient : %d \n", choix );
        getchar();
#endif
    }while( (choix < 1) && (choix > 4));

    switch (choix)
    {
      case 1:
      {
        un_Jeu.maxi_fourchette = 100;
      }
        break;

      case 2:
      {
        un_Jeu.maxi_fourchette = 1000;
      }
        break;
      case 3:
      {
        un_Jeu.maxi_fourchette = 10000;
      }
        break;
      case 4:
      {
        fprintf( stdout, "\nEntrer votre borne maximale : \n");
        un_Jeu.maxi_fourchette = (int)saisie_valeur_maxi();
      }
        break;
      default:
        un_Jeu.maxi_fourchette = 100;
        break;
    }
    return EXIT_SUCCESS;
}
