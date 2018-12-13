#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int longueur = 0;
    printf("Longueur du rectangle?");
    scanf("%d", &longueur);

    int largeur = 0;
    printf("Largeur du rectangle?");
    scanf("%d", &largeur);

    int perimetre = 0;
    perimetre = largeur*2 + longueur*2;
    printf("Le perimetre est : %d \n" , perimetre );

    int aire = 0;
    aire = largeur*longueur;
    printf("L'aire est : %d \n" , aire );

}
