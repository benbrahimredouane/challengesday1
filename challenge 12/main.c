#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int inverse;
    int a,b,c,d;



    printf("donner votre number");
    scanf("%d",&number);

    a = number / 1000;


    number = number % 1000;
    b = number / 100;

    number = number % 100;

    c = number / 10;

    d = number % 10;

    inverse = (d *1000) +( c*100 ) +( b*10 )+ a ;
    printf("l inverse de votre number est : %d" ,inverse);





    return 0;


}
