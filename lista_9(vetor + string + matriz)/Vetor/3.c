#include<stdio.h>

#define N 10

int main(){

    int i;
    int maior , menor;
    int vet[N];

    for(i = 0 ; i < N ; i++){
        scanf("\n%d" , &vet[i]);
    }

    maior = vet[0];
    menor = vet[0];
    for(i = 1 ; i < N ; i++){
        
        if(vet[i] > maior){
            maior = vet[i];
        }

        if(vet[i] < menor){
            menor = vet[i];
        }

    }

    printf("\nmaior: %d , menor: %d\n" , maior , menor);

    return 0;
}