#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    int age;
        printf("inserisic la tua età : \n");
        scanf("%d", &age); //uguale a printf ma al contrario 
        printf("tu hai %d anni \n", age);

    double altezza;
        printf("inserisici la tua altezza: \n");
        scanf("%lf", &altezza); //uguale a printf ma al contrario double
        printf("la tua altezza è %f \n", altezza);

    char voto;
        printf("inserisici il tuo voto: \n");
        scanf("%c", &voto); //uguale a printf ma al contrario char
        printf("il tuo voto è %c \n", voto);

    char nome [30];
        printf("inserisici il tuo nome: \n");
        scanf("%s", nome); //uguale a printf ma al contrario array non serve &
        printf("la tuo nome è %s \n", nome);

    char nome2 [30];
        printf("inserisici il tuo nome: \n");
        fgets (nome2, 30, stdin); //uguale a printf ma al contrario array non serve & e questa conta anche gli spazzi 
        printf("la tuo nome è %s \n", nome2);
 return 0;
}