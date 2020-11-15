#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    


int main(){
        int luck[6];

        for(int j = 0; j <= 5; j++){
            printf("inserisci il tuo elemento nel array: \n");
            scanf("%d", &luck[j]);
        }

            printf(" ecco il tuo array: \n");
            printf("{");
        for(int i = 0; i <= 5; i++){
                
                if(i <= 4){
                    printf("%d,", luck[i]);
                }else{
                    printf("%d", luck[i]);
                }
                
        }
        printf("}\n");
}