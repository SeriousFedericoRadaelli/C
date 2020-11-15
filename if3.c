#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){


        if(3 == 2 || 2 != 5){
            printf("true");
        }else if(!(3 == 3)){ //neghi tutto il contenuto delle parentesi, quindi solo se 3 non è uguale a 3 entri 
            printf("false");
        }
    
    return 0;
}