#include <stdio.h>
#include <stdlib.h>

void main(){

    int i, j;
    //inicio do laço do primeiro for
    for (i=1 ; 1<=4 ; i++){
        //inicio do laço do segundo for
        for (j=1 ; j<=4 ; j++){
            if(j < 4)
                printf("%d \n", j+i);
            else
                printf("%d \n", j+1);
        }
    }
}