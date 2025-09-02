#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operation;
    float a , b;

    printf("saisir les deux nombres\n");

    scanf("%f %f", &a ,&b);

    printf("choisir l operation\n");
    scanf(" %c",&operation);


    switch(operation){


    case '*' :
    printf("vous avez choiser multiplication\n");
    printf("la resultat est: %f ",a*b);

    break;

    case '+' :
    printf("vous avez choiser addition\n");
    printf("la resultat est: %f ",a+b);

    break;

    case '-' :
    printf("vous avez choiser soustraction\n");
    printf("la resultat est: %f ",a-b);

    break;

    case '/' :
    printf("vous avez choiser Division \n");
    if (b==0)printf("pas possible\n");
    else printf("la resultat est :%f " , a/b);
    break;

    default :
        printf("wrong op");



    }












    return 0;
}
