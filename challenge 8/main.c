#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float a,b,c;
    float Moyenne;
    printf("donner les trois num pour calcul la M geometrique\n");
    scanf("%f %f %f",&a ,&b ,&c);

    Moyenne = cbrt(a*b*c);

    printf("la moyenne géométrique est : %f\n", Moyenne);
    return 0;
}
