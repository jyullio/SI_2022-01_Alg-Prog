#include<stdio.h>

#define N 15

int main(){

    int i;
    float notas[N] , sum = 0;

    for(i = 0 ; i < N ; i++){
        scanf("\n%f" , &notas[i]);
    }

    for(i = 0 ; i < N ; i++){
        sum += notas[i];
    }
    
    printf("\nmedia : %.2f\n" , sum / N);

    return 0;
}