#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

        double num1;
        double num2;

        printf("enter first number:");
        scanf("%lf", &num1);
        printf("enter second number:");
        scanf("%lf", &num2);

        double summ = num1 + num2;

        printf("this is your add %f \n", summ);
            
 return 0;
}