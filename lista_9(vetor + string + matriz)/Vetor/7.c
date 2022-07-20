#include<stdio.h>

#define N 10

int main(){

    int i;
    int qtd_num_negativo = 0;
    float vet[N] , sum_num_positivo = 0;

    for(i = 0 ; i < N ; i++){
        scanf("\n%f" , &vet[i]);
    }

    for(i = 0 ; i < N ; i++){
        
        if(vet[i] > 0){
            sum_num_positivo += vet[i];
        }else{
            qtd_num_negativo++;
        }

    }
    
    printf("\nsum_numeros_pos: %.2f - qtd_num_negativo : %d\n" , sum_num_positivo , qtd_num_negativo);

    return 0;
}