#include<stdio.h>

#define N 10

int main(){

    int i;
    int qtd_pares = 0;
    int vet[N];

    for(i = 0 ; i < N ; i++){
        scanf("\n%d" , &vet[i]);
    }

    for(i = 0 ; i < N ; i++){
        
        if(vet[i] % 2 == 0)
            qtd_pares++;

    }

    printf("\nqtd_pares: %d\n" , qtd_pares);

    return 0;
}