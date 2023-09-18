#include"location.h"
#include <stdio.h>
#include <stdlib.h>
void admin_menu(lct t[],int n)
{int choice ,b,i;
while(1==1)
    {
        printf("**************admin_menu*************\n");

        printf("1 afficher\n");

         printf("***************************************\n");
        printf("2 verifier l'existance d'une fiche \n");

         printf("***************************************\n");
        printf("3 supprimer\n");
        printf("***************************************\n");
        printf("rechercher tous les occurance d'une fiche \n");

         printf("***************************************\n");
        printf("4 update\n ");

         printf("***************************************\n");
        printf("5 ajouter \n");

         printf("***************************************\n");
        printf("6 trier \n");


         printf("***************************************\n");
        printf("7 quitter \n");
         printf("***************************************\n");

        scanf("%i",&choice);
        switch(choice)
        {

        case 1:
        if (n==0)
        printf("aucun element aafficher \n");
        else
        afficher(t,n);
        break;
        case 2:
        existance (t,n);
        break;
        case 3:
        supprimer(t,n);
        break;
        case 4:
        printf("quelle fiche de location voulez vous la modifier \n");
        scanf("%i",&i);
        change(&t[i]);
        case 5:
        do
                    {
                        ajouter(t,n);
                        n++;
                        printf("\n\n\nSi vous voulez entrer un autre article taper sur 1:\n");
                        scanf("%i",&b);

                    }while(b==1);
            break;
        case 6:
        trier(t,n);
        break;
        case 7:
        exit(0);
        break;
        case 8:
        recherche(t,n);
        }
    }}
