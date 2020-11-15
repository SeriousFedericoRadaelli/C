#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    


int main(){
        int array[3][3];
            int n, m;

            for(n = 0; n < 3; n++){
                for(m = 0; m < 3;m++){
                            printf("inserisci gli lementi del array: \n");
                            scanf("%d", &array[n][m]);
                        }
                printf("\n");
            }
        
        int i, j;

                printf("ecco la tua matrice: \n");
            for(i = 0; i < 3; i++){
                printf("{");
                for(j = 0; j < 3;j++){
                        if(j < 2){
                            printf("%d,", array[i][j]);
                        }else{
                            printf("%d", array[i][j]);
                        }
                }
                printf("}");
                printf("\n");
            }

        
}