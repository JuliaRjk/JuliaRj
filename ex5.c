#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int r= 0; // on définit le rayon
    printf("Choisir un rayon \n");
    scanf("%d", &r); // on demande le rayon du cercle

    int d= r*2;
    printf("Diametre = %d \n" , d ); // Calcul du diamètre

    double p= 2*M_PI*r;
    printf("Perimetre = %.3f \n" , p); // Périmètre du cercle

    int aire= M_PI*r*r;
    printf("Aire = %d \n" , aire); // Calcul de l'aire

    return 0;
}
