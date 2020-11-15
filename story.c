#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int age = 23;
    char name[] = "stronzo"; // array of chars 
    
    printf("cera una volta un uomo di nome %s \n", name); // chiamare la stringa nella stampa 
    printf("avveva %d anni \n", age); //stampi un decimale

    age = 30;                                   //cambiamento di valore in int
    printf("gli piaceva il nome %s \n",name);
    printf("ma non gli piaceva avere %d anni \n", age);
    
}