#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    


int main(){
        FILE * fpointer = fopen("test.txt", "w");   //possiamo scegliere cosa fargli fare come r = leggere w = crivere a = appendere informazioni 
                                                    //alla fine del file, ricordaate di mettere uno spazio prima della parola

        fprintf(fpointer,"test ha funzionato"); //questo verrà scritto nel nostro file test.txt

        fclose(fpointer); //ricordiamoci sempre di chiudere il processo 

        //tutto questo crerà un file che vorremo nella nostra directory 
}