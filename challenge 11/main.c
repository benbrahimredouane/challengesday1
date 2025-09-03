#include <stdio.h>
#include <stdlib.h>

int main()
{
    int loong,larg,Surface;
    printf("donner longueur de votre rectangle !\n");
    scanf("%d",&loong);

    printf("donner largeur de votre rectangle !\n");
    scanf("%d",&larg);

    Surface = loong * larg;

    printf("la surface de votre rectangle est: %d",Surface);


    return 0;
}
