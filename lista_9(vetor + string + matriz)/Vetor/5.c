#include<stdio.h>

#define N 6

int main(){

    int i;
    int vet[N];

    for(i = 0 ; i < N ; i++){
        scanf("\n%d" , &vet[i]);
    }

    for(i = N -1 ; i >= 0 ; i--){
        printf("%d " , vet[i]);
    }
    printf("\n");

    return 0;
}