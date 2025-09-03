#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float x1,y1,z1;
    float x2,y2,z2;


    float Distance;
    float num1,num2,num3;
    printf("donner les cordonne de premier point!\n");
    scanf("%f %f %f" ,&x1,&y1,&z1);


    printf("donner les cordonne de la deuxieme point!\n");
    scanf("%f %f %f" ,&x2,&y2,&z2);
    num1 = pow((x2-x1),2);
    num2 = pow((y2-y1),2) ;
    num3 = pow((z2-z1),2) ;
    Distance = sqrt(num1 + num2 + num3);


    printf("la distance euclidienne entre les deux points est: %f\n",Distance);


    return 0;


}
