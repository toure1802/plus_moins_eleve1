#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int plus_moins (int value)
{
    int choix_joueur;
    printf("%d",value);
    do
    {

        printf("Quel est le nombre ? \n");
        scanf("%d", &choix_joueur);

        if (value > choix_joueur)
	{
            printf("plus !\n");
	    printf("mauvais numeros envoyer un autre\n");
            scanf("%d", &choix_joueur);


            //scanf("%d", &choix_joueur);
	}
        else if (value < choix_joueur)
	{ 
	    printf("moins !\n");
            printf("mauvais numeros envoyer un autre\n");
            scanf("%d", &choix_joueur);



            //scanf("%d", &choix_joueur);
	}
        else
            printf ("Bingo\n");
    } while (choix_joueur != value);

}
int main()
{

        int valeur_trouver = 0, choix_joueur = 0, difficulte = 0;
        int nombreTape =0, rejouer=0, coups =0, nombres_essaie =0, modeJeu =0, niveauJeu =0;
	const int MAX = 100, MIN = 1;
	srand(time(NULL));

        printf("===Niveau De Difficulte===\n");
        printf("1. Niveau facile : Entre 1 et 100\n");
        printf("2. Niveau moyen : Entre 1 et 1000\n");
        printf("3. Niveau difficile : Entre 1 et 10000\n");
        scanf("%d", &difficulte);
}	
