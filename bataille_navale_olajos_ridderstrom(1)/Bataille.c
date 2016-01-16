#include <stdlib.h>
#include <stdio.h>
/*#include "Bataille.h"*/
#include "TPartie.h"
#include "TBateau.h"
#include "TListBateau.h"
/*#include "TJoueur.h"*/
/*#include "TResultat.h"*/
#include "TGrille.h"



int main(void)
{
    
    TPartie partie = creer_partie();
    
    TJoueur j1 = creer_joueur();
    TListBateau non_places1 = get_bateaux_non_places(j1); /*recuperer les bateaux no places de joueur 1 */
    TListBateau places1 = creer_listBateau(); /*creer vide TListeBateau pour joueur 1*/
    TListBateau touches1 = creer_listBateau(); /*creer vide TListeBateau pour joueur 1*/
   
    TJoueur j2 = creer_joueur();
    TListBateau non_places2 = get_bateaux_non_places(j2); /*recuperer les bateaux no places de joueur 2*/
    TListBateau places2 = creer_listBateau(); /* creer vide TListeBateau pour joueur 2*/
    TListBateau touches2 = creer_listBateau(); /*creer vide TListeBateau pour joueur 1*/
    
    TGrille grille = creer_grille();

    saise_position(j1, non_places1); /*joueur 1 place ces 5 bateaux sur la grille*/
    saise_position(j2, non_places2); /*joueur 2 place ces 5 bateaux sur la grille*/

    TListBateau place = places1     /*reference temporaire à TListBateau places */
    TListBateau touche = touches1   /*reference temporaire à TListBateau touches*/
    

    
    int i = 1                                                       /*compteur pour joueur_actif*/
    joueur_actif = choisi_joueur_actif(partie, i);
    
    while (est_fini(place, touche) == 0) /* condition arret: quand tous les deux sont vides*/ /*0 est le False*/
    {
        TResultat resultat = tirer(joueur_actif, grille, place); /* joueur actif tire. Saisie coordonnes pour coup et controle qu'on ne tire pas à ses propres bateaux. Renvoie TResultat touche, coule, en vue, à l'eau*/
                                                                /* notre com: le parametre place est l ensemble des bat du tireur, ça sert a verifier si i tire sur son propre bat*/
      
    
        affiche_resultat(resultat);
        
        if (i==1)       /*mis a jour compteur*/
        {
            i = 2;
            place = places2;    /* mis à jour reference temporaire */
            touche = touches2;   /* mis à jour reference temporaire */
        }
        else
        {
            i = 1;
            place = places1;     /* mis à jour reference temporaire */
            touche = touches1;   /* mis à jour reference temporaire */
        }
        
        joueur_actif = choisi_joueur_actif(partie, i);
        
        if (resultat=="touche" || resultat== "coule")
        {
            TBateau bateau_touche = get_bateau_touche(); /*si un bateau est tocuhé, recuperer cet bateau*/
            mis_a_jour(resultat, bateau_touche, place, touche, grille); /*mis à jour bateau touchés, places et la grille. */
        }
        
    }
    
    if (i==1)
    {
        printf ("Joueur 2 a gagné!");
    }
    else
    {
        printf("Joueur 1 a gagné!");
    }
    return 0;
}