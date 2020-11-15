#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    


int main(){
        
        int age = 30;           // si possono crare delle avriabili pointer ma bisogna avere una variabile standard cosi da allocare un indirisso di memoria
        int * page = &age;    // qui trovo il valore del pointer di age 

        printf("%p \n", page);

        
}