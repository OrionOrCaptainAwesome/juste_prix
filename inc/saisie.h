/*
 * Fichier d'en tête saisie.h pour le projet juste_prix
 * Auteur : Green Apple Crew  / mercredi 27 mai 2015, 09:35:45 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef __SAISIE__H__
#define __SAISIE__H__
#define TAILLE_BUFFER 1024

#define VALEUR_MINI 	1
#define VALEUR_MAXI 	4

int saisie_valeur(void);
int saisie_valeur_maxi(void);

char saisie_nom_joueurs( char *);
short int saisie_choix(void);
void saisie_chaine(int *);

#endif /* __SAISIE__H__ */

