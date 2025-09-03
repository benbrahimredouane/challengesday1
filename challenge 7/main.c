#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a,b,c;
    float Moyenne;
    printf("donner les coefficient 1 et 2 et 3 pour calcule la moyenne pondérée de trois nombres \n");
    scanf("%d %d %d", &a, &b, &c);

    Moyenne = (a*2 + b*3 + c*5) / (2+3+5) ;

    printf("la moyenne ponderee est: %f",Moyenne);
    return 0;
}
