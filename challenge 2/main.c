#include <stdio.h>
#include <stdlib.h>

int main()
{
    double degree;
    printf("enter le degre\n");
    scanf("%lf",&degree);

    degree = degree + 273.15;

    printf("le degree on kelvin est %lf", degree);
    return 0;
}
