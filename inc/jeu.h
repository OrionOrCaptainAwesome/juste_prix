/*
 * Fichier d'en tête jeu.h pour le projet juste_prix
 * Auteur : Green Apple Crew  / mercredi 27 mai 2015, 09:32:00 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef __JEU__H__
#define __JEU__H__

void jeu (void);

typedef struct Jeu
{
  short int mini_fourchette;
  short int maxi_fourchette;
  short int nombre_mystere;
} JEU;

JEU un_Jeu;

int * p_nbr_mystere;
int * p_borne_maxi;

#endif /* __JEU__H__ */

