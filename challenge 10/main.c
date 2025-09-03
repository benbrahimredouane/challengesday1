#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r,Volume;
    const float pi = 3.14159;
    printf("donner le rayon pour calcule le volume d une sphere!\n");
    scanf("%f",&r);
    Volume = (4/3) * pi * pow (r,3);
    printf("le volume d une sphere est: %f",Volume);

    return 0;
}
