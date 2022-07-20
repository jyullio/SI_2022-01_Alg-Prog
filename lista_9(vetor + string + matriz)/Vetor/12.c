#include<stdio.h>

#define N 5

int main(){

    int i;
    int vet[N] , vet_triplo[N];

    for(i = 0 ; i < N ; i++){
        scanf("\n%d" , &vet[i]);
    }

    
    for(i = 0 ; i < N ; i++){
        
       vet_triplo[i] = vet[i] * 3;

    }

    printf("\nvet triplo: ");
    for(i = 0 ; i < N ; i++){
        printf("%d " , vet_triplo[i]);
    }
    printf("\n");

    return 0;
}