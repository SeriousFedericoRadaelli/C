#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int max(int num1, int num2,int num3){
        int res;
           /* if(num1<num2<num3){
                    res = num3;
            }else if(num2<num3<num1){
                    res = num1;
            }else{
                res = num2;
            }*/
            if(num1<=num3 && num2<=num3){
                    res = num3;
            }else if(num2<=num1 && num3<=num1){
                    res = num1;
            }else{
                res = num2;
            }
        return res;

    }

int main(){
    int num1;
    int num2;
    int num3;
    printf("inserisci il primo valore :");
    scanf("%d", &num1);
    printf("inserisci il secondo valore :");
    scanf("%d", &num2);
    printf("inserisci il terzo valore :");
    scanf("%d", &num3);

    printf("il valore maggiore è : %d \n",max(num1, num2,num3));
    
    return 0;
}