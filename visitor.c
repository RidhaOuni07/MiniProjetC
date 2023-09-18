#include"location.h"
#include <stdio.h>
#include <stdlib.h>
void ajouter_un_locataire(locataire tab[],int n)
{int i=n;
int e;
locataire lo;
printf("vous etes le bienvenue dans notre enterprise \n");
printf("session de saisir vos donnees\n");
saisir_locataire(&lo);


e=visitor_existance(tab,n,lo);
if(e==-1)

{printf("client n %i",i);
tab[i]=lo;
printf("merci d'etre parmis nous\n");}

else
{printf("bon retour a notre societe \n");}
}
void customer_menu(lct t[],locataire tab[],int n,int m)
{int choice,e ;
lct l;
while(1==1)
    {
        printf("**************customer_menu*************\n");
        printf("1 devenir un fidele clien dans notre enterprise \n");
        printf("*********************************************\n");

        printf("2 rechercher si un appartement est disponible\n");
        printf("*********************************************\n");
        printf("3 sortir de programme \n");
        printf("*********************************************\n");



        scanf("%i",&choice);
        switch(choice)
        {

        case 1:
        ajouter_un_locataire(tab,m);
        m++;

        break;
        case 2:
        l=new_location();
        e=disponibilte( t, n, l);
        if (e==-1)
        printf("tu peux louer cet appartement \n");
        else
        printf("appartement indisponible \n");
        break;
        case 3:
        exit(0);
        break;
        }
    }}

