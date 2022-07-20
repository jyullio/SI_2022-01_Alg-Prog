#include<stdio.h>

#define N 10

int main(){

    int i;
    int vet1[N] , vet2[N] , vet_res[N];

    printf("\nvet1 : \n");
    for(i = 0 ; i < N ; i++){
        scanf("\n%d" , &vet1[i]);
    }

    printf("\nvet2: \n");
    for(i = 0 ; i < N ; i++){
        scanf("\n%d" , &vet2[i]);
    }
    
    for(i = 0 ; i < N ; i++){
        
       vet_res[i] = vet1[i] + vet2[i];

    }
    
    printf("\nvet res: ");
    for(i = 0 ; i < N ; i++){
        printf("%d " , vet_res[i]);
    }
    printf("\n");


    return 0;
}