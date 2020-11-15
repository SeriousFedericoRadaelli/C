#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    char voto;
        printf("inserisci il tuo voto, ricorda di inserirlo in maiuscolo \n");
        scanf(" %c", &voto);
    switch(voto){
        case 'A' :
            printf("hai fatto buono \n");
            break;
        case 'B' :
            printf("hai fatto un pò meno buono \n");
            break;
        case 'C' :
            printf("hai fatto il tuo dovere \n");
            break;
        case 'D' :
            printf("hai fatto abbastanza cagare \n");
            break;
        case 'F' :
            printf("hai fatto schifo \n");
            break;
        default :
            printf("invalide grade \n");
    }
}