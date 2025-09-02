#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp;

    printf("donner la Temperature!\n");
    scanf("%f",&temp);

    if (temp < 0) {printf("Solide (glace)");}
    else if ( 0 <= temp && temp < 100 ){ printf("Liquide (eau)"); }
    else if ( temp >= 100){ printf("Gaz (vapeur)");}
    else{ printf("invalid valeur");}

    return 0;
}
