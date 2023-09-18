#include "location.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void ajouter(lct tab[],int n)
{lct l;
int i=n;
printf("la fiche de location n:%i \n",i);
l=new_location();
if (disponibilte(tab,n,l)==-1)
{
tab[i]=l;}
else
printf("appartement non disponible\n");}
void supprimer (lct tab[],int n)
{lct l;
l=new_location();
int e=disponibilte(tab,n,l),i;
if(e!=-1)
{for(i=e;i<n;i++)
{tab[i]=tab[i+1];}}
else
printf("fiche inexistant\n");
}
void change(lct *l)
{int reponse;
char name[20];
date d1,d2;
apt ap;

printf (" quelle est la modification qui vous voulez affecter\n");
printf(" 1 for name \n 2for date de debut \n 3 for date de fin \n 4 for l'appartement \n");
scanf("%i",&reponse);
if (reponse==1)
{
printf("donner un nouveau nom\n");
scanf("%s",name);
strcpy(l->namel,name);
}
else if (reponse==2)
{printf("donner une nouvelle date de debut \n");
saisirdate(& d1);
l->dd=d1;
}
else if (reponse==3)
{printf("donner un nouvelle date de fin\n ");
saisirdate(&d2);
l->df=d2;
}
else if (reponse==4)
{printf("donner un nouveau  appartement\n");
saisir_appartement(&ap);
l->a=ap;
}
}

