#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){


        char color[40];
        char nome[40];
        char location[40];

        printf("inserisci un colore: \n");
        scanf("%s", color);

        printf("inserisci un nome: \n");
        scanf("%s", nome);

        printf("inserisci una location: \n");
        scanf("%s", location);

        printf("le rose sono %s \n", color);
        printf("le %s sono blu \n", nome);
        printf("il pene di dozer è in %s \n", location);

            
 return 0;
}