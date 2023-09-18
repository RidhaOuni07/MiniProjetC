#include<stdlib.h>
#include<stdio.h>
#include"location.h"

apt saisir_appartement ( )
 {apt bui;

 printf("donner l'id d'appartement\n");
 scanf("%i",&bui.id);
 printf("donner un discription de l'appartement \n ");
 scanf("%s",bui.disc);
 printf("donner la surface d'appartement\n ");
 scanf("%f",&bui.surface);


 return bui;}
 void saisirdate(date *d)
{
printf("donner un jour\n");
scanf("%i",&d->jour);
printf("+++++++++++++\n");
printf("donner une mois\n");
scanf("%i",&d->mois);
printf("+++++++++++++++\n");
printf("donner une annee\n");
scanf("%i",&d->annee);

}


lct new_location()

{lct l;

printf("donner le nom de locataire\n");
scanf("%20s",l.namel);
printf ("donner date de debut de location \n");
saisirdate(&l.dd);
while (valadite_date(l.dd)==0)
{printf("priere de donner une date valide\n");
printf ("donner date de debut de location\n ");
saisirdate(&l.dd);}
printf("donner date de fin de location \n");
saisirdate(&l.df);
while (valadite_date(l.df)==0)

{printf("priere de donner une date valide\n");
printf ("donner date de fin de location\n ");
saisirdate(&l.df);}
printf("identifier l'appartement\n");
saisir_appartement(l.a);
return l;}
void saisir_locataire( locataire *lo)
{
printf("donner votre nom \n");
scanf("%s",lo->name);
printf("donner le numero de votre cin \n");
scanf("%i",&lo->cnd);
}
