#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int max(int num1, int num2){
        int res;
            if(num1<num2){
                    res = num2;
            }else{
                    res = num1;
            }
        return res;

    }

int main(){
    int num1;
    int num2;
    printf("inserisci il primo valore :");
    scanf("%d", &num1);
    printf("inserisci il secondo valore :");
    scanf("%d", &num2);

    printf("il valore maggiore è : %d \n",max(num1, num2));
    
    return 0;
}