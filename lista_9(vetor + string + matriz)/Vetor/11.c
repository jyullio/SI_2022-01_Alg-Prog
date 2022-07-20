#include<stdio.h>
#include<math.h>

#define N 20

int main(){

    int i;
    int vet[N] , vet_ao_quadrado[N];

    for(i = 0 ; i < N ; i++){
        scanf("\n%d" , &vet[i]);
    }

    
    for(i = 0 ; i < N ; i++){
        
       vet_ao_quadrado[i] = pow(vet[i] , 2);

    }

    printf("\nvet ao quadrado: ");
    for(i = 0 ; i < N ; i++){
        printf("%d " , vet_ao_quadrado[i]);
    }
    printf("\n");

    return 0;
}