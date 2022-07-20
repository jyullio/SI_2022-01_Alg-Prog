#include<stdio.h>

#define N 10

int main(){

    int i;
    int maior , pos_maior_elemento;
    int vet[N];

    for(i = 0 ; i < N ; i++){
        scanf("\n%d" , &vet[i]);
    }

    maior = vet[0];
    pos_maior_elemento = 0;
    for(i = 1 ; i < N ; i++){
        
        if(vet[i] > maior){
            maior = vet[i];
            pos_maior_elemento = i;
        }


    }
    printf("\nVetor: ");
    for(i = 0 ; i < N ; i++){
        printf("%d " , vet[i]);
    }

    printf("\nmaior_elemento: %d - pos_maior_elemento: %d\n" , maior , pos_maior_elemento);

    return 0;
}