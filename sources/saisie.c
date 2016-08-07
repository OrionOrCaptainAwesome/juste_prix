#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "saisie.h"
#include "boolean.h"
//#include "menu.h"
#include "jeu.h"

/* à déplacer plus tard dans le .h ad-hoc */

BOOL bString_Is_OK = TRUE;

char saisie_nom_joueurs( char * p_nom_du_joueur_)
{
  fprintf( stdout,"Saisissez le nom du joueur : ");
  fscanf( stdin, "%s", p_nom_du_joueur_);
  return *p_nom_du_joueur_;
}

void nettoyage(char * p_Nom_joueur)
{
  p_Nom_joueur ="";
}

short int saisie_choix()
{
  char saisie[TAILLE_BUFFER];
  char temp[TAILLE_BUFFER];

  do
  {
    /*
      il faut vider le contenu de temp a chaque iteration car si on entre une
      chaine de caracteres quelconque on ne sort pas de la boucle 
      (le contenu n'est plus un nombre) 
     */
    int i = 0;
    for (i = 0; i < TAILLE_BUFFER ; i++) 
    {
      temp[i]= '0';
      saisie[i]='0';
    }
    fgets( saisie, (sizeof strlen (saisie)), stdin);

    /* initialization du nombre de non-chiffres */
    short int count = 0;
#ifdef DEBUG
    fprintf (stdout,"sizeof saisie = %u \n", (sizeof saisie));
    fprintf (stdout,"strlen(saisie) = %u \n", strlen(saisie));
#endif
    /* (sizeof saisie) / (sizeof strlen(saisie[0]) ) donne la taille de saisie[] */

    for (i = 0; i < strlen (saisie) ; i++)
    {
      if ( !isdigit(saisie[i]) )
      {
         count += 1;
         bString_Is_OK = FALSE;
      }
#ifdef DEBUG
      fprintf( stdout, "Fonction en cours d'execution : %s \n", __func__ );
      fprintf( stdout, "Valeur de saisie[%d] : %c \n", i, (char )saisie[i]);
      fprintf( stdout, "Valeur de count: %d \n", count);
#endif
    }

    // cas général: sscanf (saisie, "%[0-9,.,,,-,+]s", temp);
    if (count < 3)
      sscanf (saisie, "%[0-4]s", temp);
    else
      bString_Is_OK = FALSE;

#ifdef DEBUG
    fprintf( stdout, "Valeur de temp : %d \n", *temp);
#endif

  } while ( ( strtol(temp, '\0', 10) < VALEUR_MINI ) || ( strtol(temp, '\0', 10) > VALEUR_MAXI) );

  return (short int)strtol(temp, (char **)NULL, 10);
}


int saisie_valeur()
{
  char saisie[TAILLE_BUFFER];
  char temp[TAILLE_BUFFER];
  int valeur_maxi = un_Jeu.maxi_fourchette;
  int valeur_mini = un_Jeu.mini_fourchette;
#ifdef DEBUG
      fprintf( stdout, "Valeur de valeur_mini : %d \n", valeur_mini);
      fprintf( stdout, "Valeur de valeur_maxi : %d \n", valeur_maxi);
#endif

  do
  {
    int i = 0;
    for (i = 0; i < 10 ; i++) 
    {
      temp[i]=0;
      saisie[i]='0';
    }

    fgets( saisie, (strlen(saisie)), stdin);

    /* initialization du nombre de non-chiffres */
    short int count = 0;

    for (i = 0; i < strlen( saisie) /*+ 3*/ ; i++)  
    {
      if (!isdigit( saisie[i] ) )
        count += 1;
#ifdef DEBUG
      fprintf( stdout, "Valeur de saisie[%d] : %d \n", i, saisie[i]);
      fprintf( stdout, "Valeur de count: %d \n", count);
      fprintf( stdout, "Valeur de strlen (saisie) : %u \n", strlen (saisie));
#endif
    }

    /* si que des chiffres, count = 0 (non chifres) + 2 characteres de fin de chaine */
    if (count < 3)
      sscanf (saisie, "%[0-9]s", temp);

#ifdef DEBUG
    fprintf( stdout, "Valeur de temp : %d \n", *temp);
#endif
  } while ( (strtol(temp, '\0', 10)  < valeur_mini) || (strtol(temp, '\0', 10) > valeur_maxi) );

  return strtol(temp, '\0', 10);
}

int saisie_valeur_maxi()
{
  char saisie[TAILLE_BUFFER];
  char temp[TAILLE_BUFFER];
  int valeur_mini = un_Jeu.mini_fourchette;
#ifdef DEBUG
      int valeur_maxi = un_Jeu.maxi_fourchette;
      fprintf( stdout, "Valeur de valeur_mini : %d \n", valeur_mini);
      fprintf( stdout, "Valeur de valeur_maxi avant saisie: %d \n", valeur_maxi);
#endif

  do
  {
    int i = 0;
    for (i = 0; i < 10 ; i++) 
    {
      temp[i]=0;
      saisie[i]='0';
    }

    fgets( saisie, (strlen(saisie)), stdin);

    /* initialization du nombre de non-chiffres */
    short int count = 0;

    for (i = 0; i < strlen( saisie) /*+ 3*/ ; i++)  
    {
      if (!isdigit( saisie[i] ) )
        count += 1;
#ifdef DEBUG
      fprintf( stdout, "Valeur de saisie[%d] : %d \n", i, saisie[i]);
      fprintf( stdout, "Valeur de count: %d \n", count);
      fprintf( stdout, "Valeur de strlen (saisie) : %u \n", strlen (saisie));
#endif
    }

    /* si que des chiffres, count = 0 (non chifres) + 2 characteres de fin de chaine */
    if (count < 3)
      sscanf (saisie, "%[0-9]s", temp);

#ifdef DEBUG
      fprintf( stdout, "Valeur de temp : %d \n", *temp);
#endif
  } while ( (strtol(temp, '\0', 10)  < valeur_mini) );

#ifdef DEBUG
      fprintf( stdout, "Valeur de valeur_mini : %d \n", valeur_mini);
      fprintf( stdout, "Valeur de valeur_maxi : %d \n", valeur_maxi);
#endif

  return strtol(temp, '\0', 10);
}

