#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int max(int num1, int num2,int num3){
        int res;


    }

int main(){
    double num1;
    double num2;
    char op;

        printf("enter a number:");
        scanf("%lf", &num1);
        printf("enter a other number:");
        scanf("%lf", &num2);
        printf("enter an operation:");
        scanf(" %c", &op);       
        if(op == '+'){
            printf("%f", num1 + num2);
        }else if(op == '-'){
            printf("%f", num1 - num2);
        }else if(op == '/'){
            printf("%f", num1 / num2);
        }else if(op == '*'){
            printf("%f", num1 * num2);
        }


    return 0;
}