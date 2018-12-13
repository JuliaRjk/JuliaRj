#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int r = 5;
    int d = r*2;
    printf("Diametre = %d \n" , d );


    int p = 2*M_PI*r;
    printf("Perimetre = %d \n" , p);

    int aire = M_PI*r*r;
    printf("Aire = %d \n" , aire);
}
