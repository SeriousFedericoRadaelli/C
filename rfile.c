#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    


int main(){

        char line[255];
        FILE * fpointer = fopen("test.txt", "r"); 

        fgets(line, 255, fpointer);       //legge le info da un file e le mette in un altro posto, in questo caso il nostro array char

        printf("%s \n", line);              //cosí stampiamo cio che c'è nel array 

        fclose(fpointer); 
}