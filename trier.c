#include "location.h"
#include <stdio.h>
#include <string.h>
void trier(lct tab[],int n)
{int rep;
int i,j;
lct aux;

printf("*****************tri_menu*********************\n");
printf("suivant quel caractere voulez_vous trier votre tableau\n");
printf("************************************\n");
printf("1:pour le tri selon nom de locateur\n ");
printf("************************************\n");
printf("2:pour le tri selon date de dubut de location\n");
printf("************************************\n");
printf("3:pour le tri selon de fin de location\n ");
printf("************************************\n");
scanf("%i",&rep);
switch (rep)
{case 1:
for (i=1;i<=n;i++)
{for(j=0;j<n;j++)
{if (strcmp(tab[j].namel,tab[j+1].namel)>0)
{aux=*(tab+j);
*(tab+j)=*(tab+j+1);
*(tab+j+1)=aux;}}}
case 2:
for (i=1;i<=n;i++)
{for(j=0;j<n;j++)
{if (date_sup_date(tab[j].dd,tab[j+1].dd)==1)
{aux=tab[j];
tab[j]=tab[j+1];
tab[j+1]=aux;}}}
case 3:
for (i=1;i<=n;i++)
{for(j=0;j<n;j++)
{if (date_sup_date(tab[j].df,tab[j+1].df)==1)
{aux=tab[j];
tab[j]=tab[j+1];
tab[j+1]=aux;}}}}}

