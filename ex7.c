#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int jour= 0;
    int mois=0;
    int annee=0;

    printf("Saisir le jour en JJ \n");
    scanf("%d", &jour);

    printf("Saisir le mois en MM \n");
    scanf("%d", &mois);

    printf("Saisir l'annee en AA \n");
    scanf("%d", &annee);

    printf("L'annee est : %02d-%02d-20%02d" , jour,mois,annee);
}
