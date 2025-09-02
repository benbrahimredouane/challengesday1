#include <stdio.h>
#include <stdlib.h>

int main()
{



    char name[50],prenom[50],email[50];
    char gender;
    int age;

    printf("entre votre gender!\n");
    scanf("%c",&gender);

    printf("entre votre name!\n");
    scanf("%s",name);

    printf("entre votre prenome!\n");
    scanf("%s",prenom);

    printf("entre votre email!\n");
    scanf("%s",email);

    printf("entre votre age!\n");
    scanf("%d",&age);



    printf("hello %s %s your email is : %s your age is %d and your gender is %c", name, prenom ,email, age, gender);

    return 0;
}
