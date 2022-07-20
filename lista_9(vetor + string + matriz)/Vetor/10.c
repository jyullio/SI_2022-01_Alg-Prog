#include<stdio.h>

#define N 10

int main(){

    int i;
    int vet[N];

    for(i = 0 ; i < N ; i++){
        scanf("\n%d" , &vet[i]);
    }

    vet[0] = 0;
    vet[N - 1] = 0; 
    
    for(i = 0 ; i < N ; i++){
        
       printf("%d " , vet[i]);

    }
    printf("\n");

    return 0;
}