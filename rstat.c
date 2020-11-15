#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    double esp(double num){
            double res = num * num;
            return res; //breakka il ciclo
            printf("succhiami l'uccello"); //non verrà purtroppo stampato 
    }

int main(){
    double num;
    printf("inserisci il numero di cui vuoi sapere il quadrato");
    scanf("%lf", &num);
    printf("il tuo quadrato è %f \n",esp(num));
    
    return 0;
}