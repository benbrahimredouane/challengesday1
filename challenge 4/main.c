#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vitesse;
    printf("sisair la vitesse de m/s");
    scanf("%f",&vitesse);
    vitesse = vitesse * 0.27778;
    printf("la vitesse de km/h est: %f",vitesse);

    return 0;
}
