#include <stdio.h>
#include <stdlib.h>
#include"location.h"


int main()
{
    int choice,n=0,m=0;
    lct t[50];
    locataire tab[30];
    printf("###########you are welcome##########\n");
     do
    {

        printf("1- admin\n");
        printf("2- client\n");
        printf("\n");
        printf("0- Quitter\n");
        printf("\n");
        do
            {
                printf("\nSaisir votre choix (entre 0 et 2) : ");
                scanf("%d",&choice);
            }while ( ( choice < 0 ) || ( choice > 2 ) );
        switch (choice)
        {case 1:
        admin_menu(t,n);
        break;
        case 2:
        customer_menu(t,tab,n,m);
        break;
        case 3:
        exit(0);
        break;}}
        while(1==1);
        return 0;



    }
