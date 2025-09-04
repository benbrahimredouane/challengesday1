#include <stdio.h>
#include <stdlib.h>

int main()
{
    int decimal , temp , binaire[32];
    int i = 0;

    printf("donne votre number en dicimal!\n");
    scanf("%d",&decimal);
     printf("format hexadecimal est :%x \n",decimal);

    printf("votre number en binair est: \n") ;

    temp = decimal;
    if ( temp == 0 ) printf("votre number en binair est:");
    else{
    while(temp!=0) {


            binaire[i] = temp % 2;
            temp = temp / 2;
            i++;

    }

    }
      for (int j = i - 1; j >= 0; j--) {
            printf("%d", binaire[j]);
        }
        printf("\n");



    return 0;
}
