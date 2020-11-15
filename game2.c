#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    


int main(){
        int secretnumber = 5;
        int guess;
        int guesscount = 0;
        int guesslimit = 3;
        int outofguess = 0;

            while (guess != secretnumber && outofguess == 0)
            {
                if(guesscount < guesslimit){
                    printf("enter a number: \n");
                    scanf("%d", &guess);
                    guesscount++;
                }else{
                    outofguess = 1;
                }

            }

            if(outofguess == 1){
                printf("out of guess \n");
            }else{
            printf("you win \n");
            }
            
        return 0;
}